/**
 * @file preferences.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  Preferences functions
 * @version 0.1.6
 * @date 2023-06-14
 */

#include <Preferences.h>

Preferences preferences;

/**
 * @brief Load stored preferences
 * 
 */
static void load_preferences()
{
    preferences.begin("ICENAV",false);
    #ifndef ENABLE_COMPASS
    float offx, offy;
    #endif
    offx = preferences.getFloat("C_offset_x",0.0);
    offy = preferences.getFloat("C_offset_y",0.0);
    log_v("OFFSET X  %f",offx);
    log_v("OFFSET Y  %f",offy);
    preferences.end();
}

/**
 * @brief Save current compass calibration in preferences
 * 
 * @param offset_x 
 * @param offset_y 
 */
static void save_compass_cal(float offset_x, float offset_y)
{
    preferences.begin("ICENAV",false);
    preferences.putFloat("C_offset_x",offset_x);
    preferences.putFloat("C_offset_y",offset_y);
    preferences.end();
}