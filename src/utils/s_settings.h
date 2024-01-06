#ifndef S_SETTINGS_H
#define S_SETTINGS_H
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <SPIFFS.h>

typedef struct {
    char callsign[9];
    uint8_t icon;
    bool isAlt;
} s_settings;

s_settings userSettings;

void init_settings()
{
    strncpy(userSettings.callsign, "NOCALL-1", 9);
    userSettings.isAlt = false;
    userSettings.icon=0;

    if(SPIFFS.exists("/UserSettings"))
    {
        //Try to load the settings
        File f = SPIFFS.open("/UserSettings", "r");
        if(f)
        {
            f.read((uint8_t*) &userSettings, sizeof(userSettings));
            f.close();
        }

        log_v("loaded file with values %s %d", userSettings.callsign, userSettings.icon);
    }
    else
    {
        //If not, then create a new file with the standard settings.
        File f = SPIFFS.open("/UserSettings", "w+");
        if(f)
        {
            f.write((uint8_t*) &userSettings, sizeof(userSettings));
            f.close();
        }

        log_v("created file with values %s %d", userSettings.callsign, userSettings.icon);
    }
}

void save_settings()
{
    if(SPIFFS.exists("/UserSettings"))
    {
        //Try to load the settings
        File f = SPIFFS.open("/UserSettings", "w+");
        if(f)
        {
            f.write((uint8_t*) &userSettings, sizeof(userSettings));
            f.close();
        }

        log_v("saved file with values %s %d", userSettings.callsign, userSettings.icon);
    }
    else
    {
        //If not, then create a new file with the standard settings.
        File f = SPIFFS.open("/UserSettings", "w+", true);
        if(f)
        {
            f.write((uint8_t*) &userSettings, sizeof(userSettings));
            f.close();
        }

        log_v("created file with values %s %d", userSettings.callsign, userSettings.icon);
    }
}
#endif