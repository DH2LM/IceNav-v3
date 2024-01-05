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
    lv_obj_t *but_label, *boobut_label;


    // icons = lv_img_create(mainIconScreen);
    // lv_img_set_src(icons, "F:/aprsicons-c.bin");
    // lv_obj_set_pos(icons, 0, 0);
    // lv_obj_add_flag(icons, LV_OBJ_FLAG_CLICKABLE);
    // lv_obj_add_event_cb(icons, goback, LV_EVENT_PRESSED, NULL);


    // lv_obj_t *boo_but = lv_btn_create(mainIconScreen);
    // lv_obj_set_size(boo_but, TFT_WIDTH - 30, 40);
    // boobut_label = lv_label_create(boo_but);
    // lv_obj_set_style_text_font(boobut_label, &lv_font_montserrat_20, 0);
    // lv_label_set_text_static(boobut_label, "Boo");
    // lv_obj_center(boobut_label);
    // lv_obj_add_event_cb(boo_but, draw_sprites, LV_EVENT_CLICKED, NULL);


    lv_obj_t * img1 = lv_img_create(lv_scr_act());
    lv_img_set_src(img1, (uint8_t*)phone_map);
    lv_obj_align(img1, LV_ALIGN_CENTER, 0, -20);


    lv_example_spinbox_1();


    lv_obj_t * cb;
    cb = lv_checkbox_create(mainIconScreen);
    lv_checkbox_set_text(cb, "Use alternative icon pallette");
    lv_obj_add_event_cb(cb, toggle_pallette, LV_EVENT_ALL, NULL);

    
    // Back button
    lv_obj_t *back_but = lv_btn_create(mainIconScreen);
    lv_obj_set_size(back_but, TFT_WIDTH - 30, 40);
    but_label = lv_label_create(back_but);
    lv_obj_set_style_text_font(but_label, &lv_font_montserrat_20, 0);
    lv_label_set_text_static(but_label, "Back");
    lv_obj_center(but_label);
    lv_obj_add_event_cb(spinbox, draw_sprites_first, LV_EVENT_SCREEN_LOADED, NULL);
    lv_obj_add_event_cb(back_but, goback, LV_EVENT_CLICKED, NULL);
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