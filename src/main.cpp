/**
 * @file main.cpp
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  ESP32 GPS Naviation main code
 * @version 0.1.6
 * @date 2023-06-14
 */

#define CALIBRATION_FILE "/TouchCalData1"
bool REPEAT_CAL = false;

#include <Arduino.h>
#include <stdint.h>
#include <Wire.h>
#include <SPIFFS.h>
#include <SPI.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include <esp_bt.h>
#include <Timezone.h>

unsigned long millis_actual = 0;

#include "hardware/hal.h"
#include "hardware/serial.h"
#include "hardware/sdcard.h"
#include "hardware/tft.h"
#ifdef ENABLE_COMPASS
#include "hardware/compass.h"
#endif
#ifdef ENABLE_BME
#include "hardware/bme.h"
#endif
#include "hardware/battery.h"
#include "hardware/gps.h"
#include "hardware/power.h"
#include "utils/gps_maps.h"
#include "utils/gps_math.h"
#include "utils/sat_info.h"
#include "utils/lv_spiffs_fs.h"
#include "utils/lv_sd_fs.h"
#include "utils/time_zone.h"
#include "utils/preferences.h"
#include "utils/s_settings.h"
#include "utils/aprs_is.h"
#include "gui/lvgl.h"

#include "tasks.h"

/**
 * @brief Setup
 *
 */
void setup()
{
#ifdef MAKERF_ESP32S3
  Wire.setPins(I2C_SDA_PIN, I2C_SCL_PIN);
  Wire.begin();
#endif

#ifdef ENABLE_BME
  bme.begin(BME_ADDRESS);
#endif

#ifdef ENABLE_COMPASS
  init_compass();
#endif

#ifdef DEBUG
  init_serial();
#endif
  powerOn();
  load_preferences();
  init_SPIFFS();
  init_settings();
  init_LVGL();
  init_tft();
  init_gps();
  init_ADC();
  init_sd();
  setup_aprs_is();

  Serial.println("Sensors init'ed!");
  map_spr.deleteSprite();
  map_spr.createSprite(768, 768);

  Serial.println("Splashing...");
  splash_scr();
  Serial.println("Splashed!");
  // init_tasks();

#ifdef DEFAULT_LAT
  load_main_screen();
#else
  lv_scr_load(searchSat);
#endif
}

/**
 * @brief Main Loop
 *
 */
void loop()
{
  //vTaskDelay(5);
#ifdef MAKERF_ESP32S3
  lv_tick_inc(5);
#endif
  // Serial.println("Starting timer handler");
  lv_timer_handler();
  //lv_task_handler();
  aprs_is_loop();
  while (gps->available()>0)
  {
#ifdef OUTPUT_NMEA
    {
      debug->write(gps->read());
    }
#else
    GPS.encode(gps->read());
#endif
  }
}
