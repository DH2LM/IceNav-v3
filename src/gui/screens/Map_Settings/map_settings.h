/**
 * @file map_settings.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  LVGL - Map Settings
 * @version 0.1.6
 * @date 2023-06-14
 */

static lv_obj_t *mapsettingsOptions;
static lv_obj_t *map_switch;
static lv_obj_t *zoom_level;

/**
 * @brief Device Config events include
 *
 */
#include "gui/screens/Map_Settings/events/map_settings.h"

/**
 * @brief Create a device config screen
 *
 */
static void create_map_settings_scr()
{
    // Device Config Screen
    mapsettingsScreen = lv_obj_create(NULL);
    mapsettingsOptions = lv_list_create(mapsettingsScreen);
    lv_obj_set_size(mapsettingsOptions, TFT_WIDTH, TFT_HEIGHT - 60);

    lv_obj_t *label;
    lv_obj_t *list;
    lv_obj_t *btn;

    // Map Rotation
    list = lv_list_add_btn(mapsettingsOptions, NULL, "Map Rotation Mode\nHEADING/COMPASS");
    lv_obj_clear_flag(list, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_align(list, LV_ALIGN_LEFT_MID);
    map_switch = lv_switch_create(list);
    label = lv_label_create(map_switch);
    lv_label_set_text_static(label, "C   H");
    lv_obj_center(label);
    if (map_rotation)
        lv_obj_add_state(map_switch, LV_STATE_CHECKED);
    else
        lv_obj_clear_state(map_switch, LV_STATE_CHECKED);
    lv_obj_align_to(map_switch, list, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_add_event_cb(map_switch, configure_map_rotation, LV_EVENT_VALUE_CHANGED, NULL);

    // Default zoom level
    list = lv_list_add_btn(mapsettingsOptions, NULL, "Default\nZoom Level");
    lv_obj_clear_flag(list, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_align(list, LV_ALIGN_LEFT_MID);

    btn = lv_btn_create(list);
    lv_obj_set_size(btn, 40, 40);
    lv_obj_align_to(btn, list, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_bg_img_src(btn, LV_SYMBOL_PLUS, 0);
    lv_obj_add_event_cb(btn, increment_zoom, LV_EVENT_ALL, NULL);

    zoom_level = lv_spinbox_create(list);
    lv_spinbox_set_range(zoom_level, MIN_ZOOM, MAX_ZOOM);
    lv_obj_set_width(zoom_level, 40);
    lv_obj_clear_flag(zoom_level, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_text_font(zoom_level, &lv_font_montserrat_20, 0);
    lv_spinbox_set_value(zoom_level, def_zoom);
    lv_spinbox_set_digit_format(zoom_level, 2, 0);
    lv_obj_align_to(zoom_level, list, LV_ALIGN_RIGHT_MID, 0, 0);
    //********************************************************************
    //****************** HIDE SPINBOX CURSOR -> TODO FUNCTION ************
    static lv_style_t style1;
    lv_style_init(&style1);
    lv_style_set_bg_opa(&style1, LV_OPA_TRANSP);
    lv_style_set_text_opa(&style1, LV_OPA_TRANSP);
    lv_obj_add_style(zoom_level, &style1, LV_PART_CURSOR);

    static lv_style_t style2;
    lv_style_init(&style2);
    lv_style_set_bg_opa(&style2, LV_OPA_100);
    lv_style_set_text_opa(&style2, LV_OPA_100);
    lv_obj_add_style(zoom_level, &style2, LV_PART_CURSOR | LV_STATE_FOCUS_KEY);
    lv_obj_add_style(zoom_level, &style2, LV_PART_CURSOR | LV_STATE_FOCUSED);
    //********************************************************************

    btn = lv_btn_create(list);
    lv_obj_set_size(btn, 40, 40);
    lv_obj_align_to(btn, list, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_set_style_bg_img_src(btn, LV_SYMBOL_MINUS, 0);
    lv_obj_add_event_cb(btn, decrement_zoom, LV_EVENT_ALL, NULL);

    // Back button
    btn = lv_btn_create(mapsettingsScreen);
    lv_obj_set_size(btn, TFT_WIDTH - 30, 40);
    label = lv_label_create(btn);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_20, 0);
    lv_label_set_text_static(label, "Back");
    lv_obj_center(label);
    lv_obj_align(btn, LV_ALIGN_BOTTOM_MID, 0, -10);
    lv_obj_add_event_cb(btn, device_conf_back, LV_EVENT_CLICKED, NULL);
}