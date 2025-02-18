/**
 * @file settings_scr.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  Settings Screen events
 * @version 0.1.6
 * @date 2023-06-14
 */

void load_main_screen();
void loadIconScreen();

/**
 * @brief Back button event
 *
 * @param event
 */
static void back(lv_event_t *event)
{
    load_main_screen();
}

/**
 * @brief Touch Calibration
 *
 * @param event
 */
static void touch_calib(lv_event_t *event)
{
    REPEAT_CAL = true;
    tft.fillScreen(TFT_BLACK);
    touch_calibrate();
    REPEAT_CAL = false;
    is_main_screen = false;
    lv_scr_load(settingsScreen);
}

/**
 * @brief Compass Calibration
 *
 * @param event
 */
static void compass_calib(lv_event_t *event)
{
    tft.fillScreen(TFT_BLACK);
    #ifdef ENABLE_COMPASS
    compass_calibrate();
    #endif
    is_main_screen = false;
    lv_scr_load(settingsScreen);
}

static void showIcons(lv_event_t *event)
{
    tft.fillScreen(TFT_WHITE);
    is_main_screen = false;
    loadIconScreen();
}