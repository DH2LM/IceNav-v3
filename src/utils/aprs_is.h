#ifndef APRS_IS_H_
#define APRS_IS_H_

#define WIFI_NAME "YOUR_WIFI"
#define WIFI_KEY "YOUR_WIFI_KEY"

#define USER userSettings.callsign
#define PASS "00000"
#define TOOL "ESP32-APRS-IS"
#define VERS "0.1"
#define FILTER "r/50.557/12.957/35"

#define SERVER "euro.aprs2.net"
//#define SERVER "euro.aprs2.net"
#define PORT 14580


#ifdef ESP8266
#include <ESP8266WiFi.h>
#else
#include <WiFi.h>
#endif
#include <APRS-IS.h>
#include <APRS-Decoder.h>
#include <string.h>

#include "s_settings.h"

typedef struct {
    char callsign[9];
    float lon;
    float lat;
    uint8_t icon; 
    bool altpal;
    char overlayltr;
} station;

station stationsList[64];

uint8_t list_len = 0;
uint8_t list_ptr = 0;

APRS_IS* aprs_is;

void setup_aprs_is()
{
    aprs_is = new APRS_IS(USER, PASS, TOOL, VERS);
	Serial.println("APRS-IS test with decoder");

	WiFi.mode(WIFI_STA);
	WiFi.begin(WIFI_NAME, WIFI_KEY);
	Serial.print("Waiting for WiFi");

	while(WiFi.status() != WL_CONNECTED)
	{
		Serial.print(".");
		delay(500);
	}

	Serial.println("");
	Serial.println("WiFi connected");
	Serial.print("IP address: ");
	Serial.println(WiFi.localIP());

	delay(500);
}

bool newStation(const char callsign[9], const char message[256]);
void listStations();
void aprs_is_loop()
{
	if(!aprs_is->connected())
	{
		Serial.print("connecting to server: ");
		Serial.print(SERVER);
		Serial.print(" on port: ");
		Serial.println(PORT);
		if(!aprs_is->connect(SERVER, PORT, FILTER))
		{
			Serial.println("Connection failed.");
			Serial.println("Waiting 5 seconds before retrying...");
			delay(5000);
			return;
		}
		Serial.println("Connected to server!");
	}
	if(aprs_is->available() > 0)
	{
		String msg_ = aprs_is->getMessage();
		if(msg_.startsWith("#"))
		{
			Serial.println(msg_);
		}
		else
		{
			APRSMessage msg;
			msg.decode(msg_);
			Serial.println(msg.toString());

            if(newStation(msg.getSource().c_str(), msg.getBody()->toString().c_str()))
            {
                listStations();
            }
		}
	}
}

bool parseMsg(const char message[256], float* lat, float* lon, uint8_t* icon, bool* altpal, char* overlayltr);
bool newStation(const char callsign[9], const char message[256])
{
    //check if a callsign already exists
    bool call_exists = false;
    uint8_t call_exists_pos = 0;

    station ns;
    strncpy(ns.callsign, callsign, 9);
    ns.icon=1;
    ns.altpal=false;
    ns.overlayltr=(char)0;
    ns.lat = 0.0;
    ns.lon = 0.0;

    for(uint8_t i=0; i<list_len && !call_exists; i++)
    {
        if(strncmp(stationsList[i].callsign, callsign, 9) == 0)
        {
            call_exists = true;
            call_exists_pos = i;
        }
    }

    float nlon=0.0;
    float nlat=0.0;
    bool altpal=false;
    char overlayltr=(char)0;
    uint8_t icon=1;

    bool msgValid = false;
    //Parse here
    msgValid = parseMsg(message, &ns.lat, &ns.lon, &ns.icon, &ns.altpal, &ns.overlayltr);

    if(!msgValid)
    {
        return false;
    }

    if(call_exists)
    {
        stationsList[call_exists_pos] = ns;
    }
    else
    {
        list_ptr = list_ptr % 64;
        if(list_len < 64) list_len++;
        stationsList[list_ptr] = ns;
        list_ptr++;
    }

    return true;
}

void substr(const char* origin, char* output, uint8_t start, uint8_t len)
{
    for(int i=0; i<len; i++)
    {
        Serial.print(origin[i+start]);
        output[i] = origin[i+start];
    }
}

float getDecimal(float raw_val)
{
    float mins, secs;
    float val = 0.0;

    val = floor(raw_val);

    mins = (raw_val - floor(raw_val)) * 100;
    val+=(mins/60.0);

    secs = (mins-floor(mins)) * 100;
    val+=(secs/3600.0);

    return val;
}

bool parseMsg(const char message[256], float* lat, float* lon, uint8_t* icon, bool* altpal, char* overlayltr)
{
    char raw_lat[9] = "0000.00N";
    char raw_lon[10] = "00000.00E";
    uint8_t o=6; 

    char msgtype = message[0+o];

    char raw_overlay = '/';
    char raw_icon = 'O';


    //Set an offset in case there is a timestamp
    switch(msgtype)
    {
        case '/':
            o=13;
            break;

        case '@':
            o=13;
            break;

        case '!':
            o=6;
            break;

        case '=':
            o=6;
            break;
        
        case 'z':
            o=6;
            break;

        default:
            return false;
    }

    //strncpy(raw_lat, message+(1+o), 8);
    substr(message, raw_lat, 1+o, 8);
    raw_overlay = message[9+o];
    //strncpy(raw_lon, message+(10+o), 9);
    substr(message, raw_lon, 10+o, 9);
    raw_icon = message[19+o]; 

    // char logstr[256];
    // sprintf(logstr, "raw_lat=%s\n\nraw_lon=%s\n\nraw_icon=%c\nraw_overlay=%c\n\n", raw_lat, raw_lon, raw_icon, raw_overlay);

    Serial.println(raw_lat);
    Serial.println(raw_lon);
    Serial.println(message+o);

    float f_raw_lat = atof(raw_lat) / 100.0;
    float f_raw_lon = atof(raw_lon) / 100.0;

    *lat = getDecimal(f_raw_lat);
    *lon = getDecimal(f_raw_lon);

    if(raw_lat[strlen(raw_lat) - 1] == 'S')
    {
        *lat = *lat * -1;
    }

    if(raw_lon[strlen(raw_lon) - 1] == 'W')
    {
        *lon = *lon * -1;
    }
    
    if((uint8_t)raw_icon < 33)
    {
        *icon = 0;
    }
    else
    {
        *icon = (uint8_t)raw_icon - 33;
    }

    if(raw_overlay == '/')
    {
        *altpal = false;
    }
    else
    {
        *altpal = true;
        *overlayltr = raw_overlay;
    }

    return true;
}

void listStations()
{
    for(int i=0; i<list_len; i++)
    {
        station cs = stationsList[i];
        log_d("Station #%d:\n\n%s\n%f, %f\n%d %d %c\n\n", i, cs.callsign, cs.lat, cs.lon, cs.icon, cs.altpal, cs.overlayltr);
    }
}
#endif