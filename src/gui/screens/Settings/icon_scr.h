/**
 * @file icon_scr.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  LVGL - Settings screen
 * @version 0.1.6
 * @date 2023-06-14
 */

static lv_obj_t *mainIconScreen;

LV_IMG_DECLARE(phone_img);


/**
 * @brief Icon Screen events include
 *
 */
#include "gui/screens/Settings/events/icon_scr.h"
/**
 * @brief Create Settings screen
 *
 */
lv_obj_t *icons;

void lv_example_spinbox_1(void);

void create_icon_scr()
{
    static lv_style_t style_sel;
    lv_style_init(&style_sel);
    lv_style_set_text_font(&style_sel, &lv_font_montserrat_24);
    lv_style_set_bg_color(&style_sel, lv_color_hex3(0xf88));
    lv_style_set_border_width(&style_sel, 2);
    lv_style_set_border_color(&style_sel, lv_color_hex3(0xf00));

    // Icon Screen
    mainIconScreen = lv_obj_create(NULL);
    lv_obj_set_size(mainIconScreen, TFT_WIDTH, TFT_HEIGHT);
    lv_obj_set_pos(mainIconScreen, 0, 0);
    lv_obj_set_flex_flow(mainIconScreen, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(mainIconScreen, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_t *but_label, *savebut_label;


    //Spinbox, for selecting icons
    lv_example_spinbox_1();


    //Checkbox, for selecting icon pallette
    cbAlt = lv_checkbox_create(mainIconScreen);
    lv_checkbox_set_text(cbAlt, "Use alternative icon pallette");
    lv_obj_add_event_cb(cbAlt, toggle_pallette, LV_EVENT_ALL, NULL);


    //Textbox for Callsign entry
    /*Create a label and position it above the text box*/
    lv_obj_t * oneline_label = lv_label_create(mainIconScreen);
    lv_label_set_text(oneline_label, "Call + SSID (e.g. N0CALL-1):");

    /*Create the one-line mode text area*/
    text_ta = lv_textarea_create(mainIconScreen);
    lv_textarea_set_one_line(text_ta, true);
    lv_textarea_set_password_mode(text_ta, false);
    lv_textarea_set_max_length(text_ta, 9);
    lv_textarea_set_text(text_ta, "N0CALL-1");
    lv_obj_set_width(text_ta, lv_pct(40));
    lv_obj_add_event_cb(text_ta, ta_event_cb, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(text_ta, ta_event_tb, LV_EVENT_ALL, NULL);
    lv_obj_align(text_ta, LV_ALIGN_TOP_RIGHT, -5, 20);

    lv_obj_align_to(oneline_label, text_ta, LV_ALIGN_OUT_TOP_LEFT, 0, 0);

    /*Create a keyboard*/
    kb = lv_keyboard_create(mainIconScreen);
    lv_obj_set_size(kb,  LV_HOR_RES, LV_VER_RES / 2);
    lv_keyboard_set_mode(kb, LV_KEYBOARD_MODE_TEXT_UPPER);
    lv_keyboard_set_textarea(kb, text_ta); /*Focus it on one of the text areas to start*/
    lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);

    //Save button
    lv_obj_t *save_but = lv_btn_create(mainIconScreen);
    lv_obj_set_size(save_but, TFT_WIDTH - 30, 40);
    savebut_label = lv_label_create(save_but);
    lv_obj_set_style_text_font(savebut_label, &lv_font_montserrat_20, 0);
    lv_label_set_text_static(savebut_label, "Save");
    lv_obj_center(savebut_label);
    lv_obj_add_event_cb(save_but, save_settings_bt, LV_EVENT_CLICKED, NULL);
    
    // Back button
    lv_obj_t *back_but = lv_btn_create(mainIconScreen);
    lv_obj_set_size(back_but, TFT_WIDTH - 30, 40);
    but_label = lv_label_create(back_but);
    lv_obj_set_style_text_font(but_label, &lv_font_montserrat_20, 0);
    lv_label_set_text_static(but_label, "Back");
    lv_obj_center(but_label);
    lv_obj_add_event_cb(mainIconScreen, draw_sprites_first, LV_EVENT_DRAW_POST_END, NULL);
    lv_obj_add_event_cb(mainIconScreen, draw_sprites_first, LV_EVENT_READY, NULL);
    // lv_obj_add_event_cb(mainIconScreen, draw_sprites_first, LV_EVENT_REFRESH, NULL);
    lv_obj_add_event_cb(back_but, goback, LV_EVENT_CLICKED, NULL);

    //Preinitialize with values
    lv_textarea_set_text(text_ta, userSettings.callsign);
    lv_spinbox_set_value(spinbox, userSettings.icon);
    if(userSettings.isAlt) lv_obj_add_state(cbAlt, LV_STATE_CHECKED);

    altPal = userSettings.isAlt;
    icon_id = userSettings.icon;
}


void lv_example_spinbox_1(void)
{
    lv_obj_t * cont = lv_obj_create(mainIconScreen);
    lv_obj_center(cont);
    lv_obj_set_layout(cont, LV_LAYOUT_GRID);

    spinbox = lv_spinbox_create(cont);
    lv_spinbox_set_range(spinbox, 0, 96);
    lv_spinbox_set_digit_format(spinbox, 2, 0);
    short int h = lv_obj_get_height(spinbox);
    lv_obj_set_width(spinbox, h);
    lv_spinbox_set_step(spinbox, 1);
    lv_spinbox_set_rollover(spinbox, true);
    lv_obj_center(spinbox);

    static short int col_dsc[] = {h+10, h+10, h+10, LV_GRID_TEMPLATE_LAST};
    static short int row_dsc[] = {h+10, LV_GRID_TEMPLATE_LAST};
    lv_obj_set_size(cont, (h+24)*3, h+40);
    lv_obj_set_grid_dsc_array(cont, col_dsc, row_dsc);

    lv_obj_set_grid_cell(spinbox, LV_GRID_ALIGN_CENTER, 1, 1, LV_GRID_ALIGN_CENTER, 0, 1);

    lv_obj_t * btn = lv_btn_create(cont);
    lv_obj_set_size(btn, h, h);
    // lv_obj_align_to(btn, spinbox, LV_ALIGN_OUT_RIGHT_MID, 5, 0);
    lv_obj_set_style_bg_img_src(btn, LV_SYMBOL_PLUS, 0);
    lv_obj_add_event_cb(btn, lv_spinbox_increment_event_cb, LV_EVENT_ALL,  NULL);
    lv_obj_set_grid_cell(btn, LV_GRID_ALIGN_CENTER, 2, 1, LV_GRID_ALIGN_CENTER, 0, 1);

    btn = lv_btn_create(cont);
    lv_obj_set_size(btn, h, h);
    // lv_obj_align_to(btn, spinbox, LV_ALIGN_OUT_LEFT_MID, -5, 0);
    lv_obj_set_style_bg_img_src(btn, LV_SYMBOL_MINUS, 0);
    lv_obj_add_event_cb(btn, lv_spinbox_decrement_event_cb, LV_EVENT_ALL, NULL);
    lv_obj_set_grid_cell(btn, LV_GRID_ALIGN_CENTER, 0, 1, LV_GRID_ALIGN_CENTER, 0, 1);
}