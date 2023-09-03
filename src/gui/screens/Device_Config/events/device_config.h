/**
 * @file device_config.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  Device Config events
 * @version 0.1.6
 * @date 2023-06-14
 */

/**
 * @brief Back button event
 *
 * @param event
 */
static void device_conf_back(lv_event_t *event)
{
    lv_scr_load(settingsScreen);
}

/**
 * @brief Configure Map rotation event
 *
 * @param event
 */
static void configure_map_rotation(lv_event_t *event)
{
    map_rotation = lv_obj_has_state(map_switch, LV_STATE_CHECKED);
    save_map_rotation(map_rotation);
}

/**
 * @brief Increment default zoom value event
 *
 * @param event
 */
static void increment_zoom(lv_event_t *event)
{
    lv_event_code_t code = lv_event_get_code(event);
    if (code == LV_EVENT_SHORT_CLICKED || code == LV_EVENT_LONG_PRESSED_REPEAT)
    {
        lv_spinbox_increment(zoom_level);
        def_zoom = (uint8_t)lv_spinbox_get_value(zoom_level);
        save_default_zoom(def_zoom);
    }
}

/**
 * @brief Decrement default zoom value event
 *
 */
static void decrement_zoom(lv_event_t *event)
{
    lv_event_code_t code = lv_event_get_code(event);
    if (code == LV_EVENT_SHORT_CLICKED || code == LV_EVENT_LONG_PRESSED_REPEAT)
    {
        lv_spinbox_decrement(zoom_level);
        def_zoom = (uint8_t)lv_spinbox_get_value(zoom_level);
        save_default_zoom(def_zoom);
    }
}