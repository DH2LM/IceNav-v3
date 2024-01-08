/**
 * @file hal.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  Pin definitions
 * @version 0.1.6
 * @date 2023-06-14
 */

#ifdef CUSTOMBOARD
/**
 * @brief GPS pin definition
 *
 */


  // #define MISO_D 12
  // #define MOSI_D 13
  // #define SCK_D  14
  // #define LED_D  21
  // #define DC_D   2
  // #define RST_D  -1
  // #define BUSY_D -1
  // #define CS_D   15

  // #define CS_T   33
  // #define INT_T  36
  // #define MISO_T 39
  // #define MOSI_T 32
  // #define SCK_T  25

  // #define AUD_PIN 26

  // #define GPS_TX 4
  // #define GPS_RX 35

  #define GPS_TX 27
  #define GPS_RX 4

  //Still free pins: 35, 4, 21 can be freed
  #define LORA_DIO0 35
  #define LORA_CS 22
  #define LORA_RS 21

/**
 * @brief SD pin definition
 *
 */
  #define SD_CS 5
  #define SD_MISO 19
  #define SD_MOSI 23
  #define SD_CLK 18

  // #define I2C_SDA_PIN 4
  // #define I2C_SCL_PIN 35
#endif

#ifdef MAKERF_ESP32S3  // TODO: we need find the right pins for this board
/**
 * @brief GPS pin definition
 *
//  */
//   #define GPS_TX 17
//   #define GPS_RX 18

//   #define LCD_CS 37
//   #define LCD_BLK 45

//   #define I2C_SDA_PIN 38
//   #define I2C_SCL_PIN 39

//   #define SD_MOSI 2
//   #define SD_MISO 41
//   #define SD_CLK 42
//   #define SD_CS 1
#endif

/**
 * @brief Battery monitor pin
 *
 */
  #define ADC_BATT_PIN 34

/**
 * @brief BME280 Address
 * 
 */
  #define BME_ADDRESS 0x76
