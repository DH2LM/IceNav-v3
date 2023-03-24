/**
 * @file gps.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  GPS definition and functions
 * @version 0.1
 * @date 2022-10-09
 */

#include <TimeLib.h>
#include <TinyGPS++.h>

#define MAX_SATELLITES 60
#define MAX_SATELLLITES_IN_VIEW 32
int TIME_OFFSET = 1;
HardwareSerial *gps = &Serial2;
TinyGPSPlus GPS;
bool is_gps_fixed = false;
int upd_rate = 500;

/**
 * @brief Custom NMEA sentences
 *
 */
TinyGPSCustom totalGPGSVMessages(GPS, PSTR("GPGSV"), 1); // $GPGSV sentence, first element
TinyGPSCustom messageNumber(GPS, PSTR("GPGSV"), 2);      // $GPGSV sentence, second element
TinyGPSCustom satsInView(GPS, PSTR("GPGSV"), 3);         // $GPGSV sentence, third element
TinyGPSCustom satNumber[4];                              // to be initialized later
TinyGPSCustom elevation[4];
TinyGPSCustom azimuth[4];
TinyGPSCustom snr[4];
#ifdef CUSTOMBOARD
TinyGPSCustom pdop(GPS, PSTR("GNGSA"), 15); // $GNGSA sentence, 15th element
TinyGPSCustom hdop(GPS, PSTR("GNGSA"), 16); // $GNGSA sentence, 16th element
TinyGPSCustom vdop(GPS, PSTR("GNGSA"), 17); // $GNGSA sentence, 17th element
TinyGPSCustom fix(GPS, PSTR("GNGGA"), 6);
TinyGPSCustom fix_mode(GPS, PSTR("GNGSA"),2);
#else
TinyGPSCustom pdop(GPS, PSTR("GPGSA"), 15); // $GPGSA sentence, 15th element
TinyGPSCustom hdop(GPS, PSTR("GPGSA"), 16); // $GPGSA sentence, 16th element
TinyGPSCustom vdop(GPS, PSTR("GPGSA"), 17); // $GPGSA sentence, 17th element
TinyGPSCustom fix(GPS, PSTR("GPGGA"), 6);
TinyGPSCustom fix_mode(GPS, PSTR("GPGSA"),2);
#endif

/**
 * @brief Structure for satellite position (elevation, azimut,...)
 *
 */
struct
{
  bool active;
  int satnumber;
  int elevation;
  int azimuth;
  int snr;
  int pos_x;
  int pos_y;
} sat_tracker[MAX_SATELLITES];

/**
 * @brief Init GPS and custon NMEA parsing
 *
 */
void init_gps()
{
  gps->begin(GPS_BAUDRATE, SERIAL_8N1, GPS_RX, GPS_TX);
#ifdef CUSTOMBOARD
  gps->println("$PCAS04,7*1E\r\n");
  gps->println("$PCAS02,200*1D\r\n"); 
#endif

  for (int i = 0; i < 4; ++i)
  {
    satNumber[i].begin(GPS, PSTR("GPGSV"), 4 + 4 * i); // offsets 4, 8, 12, 16
    elevation[i].begin(GPS, PSTR("GPGSV"), 5 + 4 * i); // offsets 5, 9, 13, 17
    azimuth[i].begin(GPS, PSTR("GPGSV"), 6 + 4 * i);   // offsets 6, 10, 14, 18
    snr[i].begin(GPS, PSTR("GPGSV"), 7 + 4 * i);       // offsets 7, 11, 15, 19
  }
}
