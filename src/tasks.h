/**
 * @file tasks.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  Core Tasks functions
 * @version 0.1.6
 * @date 2023-06-14
 */

#define GPS_READ_FREQUENCY 1U // ms

/**
 * @brief Tasks timers params.
 *
 */
static SemaphoreHandle_t gps_data_mutex;
static TimerHandle_t timer_h = NULL;
static TaskHandle_t read_gps_task_handle = NULL;

/**
 * @brief GPS Task Container
 *
 */
typedef struct
{
  HardwareSerial *serial_gps_handle;
  TinyGPSPlus gps;
} GPS_t;
GPS_t *task_gps;

TinyGPSPlus current_gps;

/**
 * @brief This function notifies the reading task when it's time to read
 *
 * @param timer_h
 */
static void
gps_timer_callback(TimerHandle_t timer_h)
{
  BaseType_t xHigherPriorityTaskWoken = pdFALSE;

  vTaskNotifyGiveFromISR(read_gps_task_handle, &xHigherPriorityTaskWoken);

  if (xHigherPriorityTaskWoken == pdTRUE)
    portYIELD_FROM_ISR();
}

/**
 * @brief Task 1 - Read GPS data
 *
 * @param pvParameters
 */
void Read_GPS(void *pvParameters)
{
  const TickType_t max_blocking_time = pdMS_TO_TICKS(200); // ms
  log_v("Task1 - Read GPS - running on core %d", xPortGetCoreID());
  log_v("Stack size: %d",uxTaskGetStackHighWaterMark(NULL));
  while (1)
  {
    ulTaskNotifyTake(pdTRUE, max_blocking_time);
    xTimerStart(timer_h, portMAX_DELAY);
    task_gps->gps.encode(task_gps->serial_gps_handle->read());

    //if (task_gps->gps.sentencesWithFix() > 1)
    {
      xSemaphoreTake(gps_data_mutex, portMAX_DELAY);
      current_gps = task_gps->gps;
      xSemaphoreGive(gps_data_mutex);
    }
  }
}

/**
 * @brief Init Core tasks
 *
 */
void init_tasks(GPS_t *gps_t, TinyGPSPlus gps_, HardwareSerial *serial_port)
{
  gps_t->serial_gps_handle = serial_port;
  gps_t->gps = gps_;

  gps_t->serial_gps_handle->begin(GPS_BAUD[gps_speed], SERIAL_8N1, GPS_RX, GPS_TX);

#ifdef AT6558D_GPS
  gps_t->serial_gps_handle->println("$PCAS04,7*1E\r\n");
  gps_t->serial_gps_handle->flush();
  delay(100);

  gps_t->serial_gps_handle->println(GPS_RATE_PCAS[gps_update]);
  gps_t->serial_gps_handle->flush();
  delay(100);

  // Set NMEA 4.1
  gps_t->serial_gps_handle->println("$PCAS05,2*1A\r\n");
  gps_t->serial_gps_handle->flush();
  delay(100);
#endif

  task_gps = gps_t;
  gps_data_mutex = xSemaphoreCreateMutex();
  timer_h = xTimerCreate("read_gps_timer", GPS_READ_FREQUENCY / portTICK_PERIOD_MS, pdTRUE, (void *)0, gps_timer_callback);
  xTaskCreatePinnedToCore(Read_GPS, "read_GPS", 20000, NULL, 1, &read_gps_task_handle, 1);
  //xTaskCreatePinnedToCore(Read_GPS, "read_GPS", 20000, NULL, 1, NULL, 1);
}
