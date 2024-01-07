/**
 * @file icon_scr.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  Settings Screen events
 * @version 0.1.6
 * @date 2023-06-14
 */


/**
 * @brief Back button event
 *
 * @param event
 */


#include "gui/aprsicons/std/include.h"
#include "gui/aprsicons/alt/include.h"

static lv_obj_t * spinbox;
static lv_obj_t * kb;
static lv_obj_t * cbAlt;
static lv_obj_t * text_ta;


TFT_eSprite icon_spr = TFT_eSprite(&tft);
TFT_eSprite scaled_icon_spr = TFT_eSprite(&tft);
bool altPal = false;
uint8_t icon_id;

static void goback(lv_event_t *event)
{
    log_v("Settings");
    icon_spr.deleteSprite();
    is_main_screen = false;
    lv_scr_load(settingsScreen);
}

static const char* iconResolver(uint8_t id)
{
    switch(id)
    {
        case 0:
            return policestn_map;
        case 2:
            return digi_map;
        case 3:
            return phone_map;
        case 4:
            return dxcluster_map;
        case 5:
            return gateway_map;
        case 6:
            return smallplane_map;
        case 7:
            return satcar_map;
        case 8:
            return wheelchair_map;
        case 9:
            return snowmobile_map;
        case 10:
            return redcross_map;
        case 11:
            return boyscout_map;
        case 12:
            return house_map;
        case 13:
            return x_map;
        case 14:
            return reddot_map;
        case 15:
            return circle0_map;
        case 16:
            return circle1_map;
        case 17:
            return circle2_map;
        case 18:
            return circle3_map;
        case 19:
            return circle4_map;
        case 20:
            return circle5_map;
        case 21:
            return circle6_map;
        case 22:
            return circle7_map;
        case 23:
            return circle8_map;
        case 24:
            return circle9_map;
        case 25:
            return fire_map;
        case 26:
            return camp_map;
        case 27:
            return motorbike_map;
        case 28:
            return train_map;
        case 29:
            return car_map;
        case 30:
            return server_map;
        case 31:
            return hurricane_map;
        case 32:
            return aidstn_map;
        case 33:
            return bbs_map;
        case 34:
            return canoe_map;
        case 36:
            return eye_map;
        case 37:
            return tractor_map;
        case 38:
            return gridbig_map;
        case 39:
            return hotel_map;
        case 40:
            return tcpip_map;
        case 42:
            return school_map;
        case 43:
            return usrlogon_map;
        case 44:
            return apple_map;
        case 45:
            return ntsstn_map;
        case 46:
            return balloon_map;
        case 47:
            return policecar_map;
        case 48:
            return epicenter_map;
        case 49:
            return rv_map;
        case 50:
            return shuttle_map;
        case 51:
            return sstv_map;
        case 52:
            return bus_map;
        case 53:
            return atv_map;
        case 54:
            return wxsvc_map;
        case 55:
            return helicopter_map;
        case 56:
            return yacht_map;
        case 57:
            return windows_map;
        case 58:
            return human_map;
        case 59:
            return dftriangle_map;
        case 60:
            return mailbox_map;
        case 61:
            return planebig_map;
        case 62:
            return wxstn_map;
        case 63:
            return dish_map;
        case 64:
            return ambulance_map;
        case 65:
            return bike_map;
        case 66:
            return icp_map;
        case 67:
            return firestn_map;
        case 68:
            return horse_map;
        case 69:
            return firetruck_map;
        case 70:
            return glider_map;
        case 71:
            return hospital_map;
        case 72:
            return island_map;
        case 73:
            return jeep_map;
        case 74:
            return pickup_map;
        case 75:
            return laptop_map;
        case 76:
            return mice_map;
        case 77:
            return node_map;
        case 78:
            return eoc_map;
        case 79:
            return rover_map;
        case 80:
            return gridsmall_map;
        case 81:
            return antenna_map;
        case 82:
            return speedboat_map;
        case 83:
            return truckstop_map;
        case 84:
            return truck_map;
        case 85:
            return van_map;
        case 86:
            return waterstn_map;
        case 87:
            return xaprs_map;
        case 88:
            return yagi_map;
        case 89:
            return shelter_map;
        case 91:
            return tncstreamsw1_map;
        case 93:
            return tncstreamsw2_map;
        case 95:
            return revision_map;
        default:
            return noicon_map;
    }

    return noicon_map;
}


static const char* altIconResolver(uint8_t id)
{
    switch(id)
    {
        case 0:
            return emergency_map;
        case 2:
            return nodigi_map;
        case 3:
            return bank_map;
        case 5:
            return nodiamond_map;
        case 6:
            return crashsite_map;
        case 7:
            return cloudy_map;
        case 8:
            return meo_map;
        case 9:
            return snow_map;
        case 10:
            return church_map;
        case 11:
            return girlscout_map;
        case 12:
            return hfhouse_map;
        case 13:
            return unknownpos_map;
        case 14:
            return destination_map;
        case 15:
            return nocircle_map;
        case 24:
            return petrolstn_map;
        case 25:
            return hail_map;
        case 26:
            return park_map;
        case 27:
            return galefl_map;
        case 29:
            return nocar_map;
        case 30:
            return infokiosk_map;
        case 31:
            return hurricanealt_map;
        case 32:
            return nobox_map;
        case 33:
            return snowblow_map;
        case 34:
            return coastguard_map;
        case 35:
            return drizzle_map;
        case 36:
            return smoke_map;
        case 37:
            return freezerain_map;
        case 38:
            return snowshower_map;
        case 39:
            return haze_map;
        case 40:
            return rainshower_map;
        case 41:
            return lightning_map;
        case 42:
            return kenwood_map;
        case 43:
            return lighthouse_map;
        case 45:
            return navbuoy_map;
        case 46:
            return rocket_map;
        case 47:
            return parking_map;
        case 48:
            return quake_map;
        case 49:
            return restaurant_map;
        case 50:
            return sat_map;
        case 51:
            return thunderstorm_map;
        case 52:
            return sunny_map;
        case 53:
            return vortac_map;
        case 54:
            return nowxsvc_map;
        case 55:
            return pharmacy_map;
        case 58:
            return wallcloud_map;
        case 61:
            return noplane_map;
        case 62:
            return nowxstn_map;
        case 63:
            return rain_map;
        case 64:
            return nodiamond2_map;
        case 65:
            return dustblow_map;
        case 66:
            return nocivildef_map;
        case 67:
            return dxspot_map;
        case 68:
            return sleet_map;
        case 69:
            return funnelcloud_map;
        case 70:
            return gale_map;
        case 71:
            return hamstore_map;
        case 72:
            return noblkbox_map;
        case 73:
            return workzone_map;
        case 74:
            return suv_map;
        case 75:
            return noiconalt_map;
        case 76:
            return milepost_map;
        case 77:
            return notriangle_map;
        case 78:
            return circlesm_map;
        case 79:
            return partcloud_map;
        case 81:
            return restroom_map;
        case 82:
            return noboat_map;
        case 83:
            return tornado_map;
        case 84:
            return notruck_map;
        case 85:
            return novan_map;
        case 86:
            return flood_map;
        case 88:
            return skywarn_map;
        case 89:
            return noshelter_map;
        case 91:
            return tncstreamsw1_map;
        case 93:
            return tncstreamsw2_map;
        case 95:
            return revision_map;
        default:
            return noicon_map;
    }

    return noicon_map;
}


uint8_t altIconCheckDraw(uint8_t iconid)
{
    /*
        Werte:
        0 - Nix
        1 - Weiß auf Schwarz
        2 - Schwarz auf Weiß
        3 - Weiß auf Rot
        4 - Weiß auf Blau
        5 - Schwarz auf hellgrau
        6 - Weiß auf Grün
        7 - Weiß auf Mittelgrau
        8 - Schwarz auf Hellgrau (Plane)
        9 - Schwarz auf Gelb
        10 - Schwarz auf Hellblau
    */
    switch(iconid)
    {
        case 2:
            return 6;
        case 5:
            return 1;
        case 15:
            return 5;
        case 29:
            return 3;
        case 32:
            return 2;
        case 54:
            return 6;
        case 61:
            return 8;
        case 62:
            return 4;
        case 64:
            return 3;
        case 66:
            return 9;
        case 72:
            return 1;
        case 77:
            return 3;
        case 82:
            return 7;
        case 84:
            return 3;
        case 85:
            return 10;
        case 89:
            return 3;
        default:
            return 0;
    }
    return 0;
}


static void create_icon_spr(TFT_eSprite &spr, uint8_t i, uint8_t x, uint8_t y)
{
  spr.deleteSprite();
  spr.createSprite(20, 20);
  spr.setColorDepth(8);
  spr.fillScreen(LVGL_BKG);
  spr.pushImage(20*x, 20*y, 20, 20, navigation);
}


static void draw_sprites()
{
    icon_spr.deleteSprite();
    scaled_icon_spr.deleteSprite();
    icon_spr.createSprite(20, 20);
    scaled_icon_spr.createSprite(60, 60);
    icon_spr.setColorDepth(16);
    scaled_icon_spr.setColorDepth(16);
    icon_spr.fillScreen(LVGL_BKG);
    scaled_icon_spr.fillScreen(LVGL_BKG);
    if(!altPal)
    {
        icon_spr.pushImage(0, 0, 20, 20, (uint16_t*)iconResolver(icon_id));
    }
    else
    {
        icon_spr.pushImage(0, 0, 20, 20, (uint16_t*)altIconResolver(icon_id));
    }
    icon_spr.pushRotateZoom(&scaled_icon_spr, 30, 30, 0, 3, 3, TFT_BLACK);
    scaled_icon_spr.pushSprite(&tft, 0, 0, TFT_BLACK);
    log_v("%d", icon_id);
}


static void lv_spinbox_increment_event_cb(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if(code == LV_EVENT_SHORT_CLICKED || code  == LV_EVENT_LONG_PRESSED_REPEAT) {
        lv_spinbox_increment(spinbox);
        icon_id = lv_spinbox_get_value(spinbox);
        draw_sprites();
    }
}

static void lv_spinbox_decrement_event_cb(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    if(code == LV_EVENT_SHORT_CLICKED || code == LV_EVENT_LONG_PRESSED_REPEAT) {
        lv_spinbox_decrement(spinbox);
        icon_id = lv_spinbox_get_value(spinbox);
        draw_sprites();
    }
}


static void toggle_pallette(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * obj = lv_event_get_target(e);
    if(code == LV_EVENT_VALUE_CHANGED) {
        altPal = lv_obj_get_state(obj) & LV_STATE_CHECKED ? true : false;
        draw_sprites();
    }
}


static void draw_sprites_first(lv_event_t * e)
{
    draw_sprites();
}


static void ta_event_cb(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(code == LV_EVENT_CLICKED || code == LV_EVENT_FOCUSED) {
        /*Focus on the clicked text area*/
        if(kb != NULL) lv_keyboard_set_textarea(kb, ta);
    }

    else if(code == LV_EVENT_READY) {
        LV_LOG_USER("Ready, current text: %s", lv_textarea_get_text(ta));
    }
}

static void ta_event_tb(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);

    if(code == LV_EVENT_CLICKED || code == LV_EVENT_FOCUSED) {
        /*Focus on the clicked text area*/
        lv_obj_clear_flag(kb, LV_OBJ_FLAG_HIDDEN);
        if(kb != NULL) lv_keyboard_set_textarea(kb, ta);
    }
    if(code == LV_EVENT_DEFOCUSED)
    {
        lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
    }
}

static void save_settings_bt(lv_event_t * e)
{
    strcpy(userSettings.callsign, lv_textarea_get_text(text_ta));
    userSettings.icon = lv_spinbox_get_value(spinbox);
    userSettings.isAlt = lv_obj_get_state(cbAlt) & LV_STATE_CHECKED ? true : false;

    save_settings();
}