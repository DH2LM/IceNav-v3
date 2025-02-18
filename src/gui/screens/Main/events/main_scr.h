/**
 * @file main_scr.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  Main screen events
 * @version 0.1.6
 * @date 2023-06-14
 */

static void delete_map_scr_sprites();
static void create_map_scr_sprites();

/**
 * @brief Flag to indicate when maps needs to be draw
 *
 */
bool is_map_draw = false;

/**
 * @brief Flag to indicate when tile map is found on SD
 *
 */
bool map_found = false;

/**
 * @brief Flag to indicate when tileview was scrolled
 *
 */
bool is_scrolled = true;

/**
 * @brief Flag to indicate when tileview scroll was finished
 *
 */
bool is_ready = false;

/**
 * @brief Old Map tile coordinates and zoom
 *
 */
MapTile OldMapTile = {"", 0, 0, 0};

/**
 * @brief Sprite for Navigation Arrow in map tile
 *
 */
TFT_eSprite sprArrow = TFT_eSprite(&tft);

/**
 * @brief Double Buffering Sprites for Map Tile
 *
 */
TFT_eSprite map_spr = TFT_eSprite(&tft);
TFT_eSprite map_rot = TFT_eSprite(&tft);

/**
 * @brief Zoom sprite
 *
 */
TFT_eSprite zoom_spr = TFT_eSprite(&tft);
TFT_eSprite is_spr = TFT_eSprite(&tft);

/**
 * @brief Zoom Levels and Default zoom
 *
 */
#define MIN_ZOOM 0
#define MAX_ZOOM 17
#define DEF_ZOOM 17
uint8_t zoom = DEF_ZOOM;

/**
 * @brief Active Tile in TileView control
 *
 */
uint8_t act_tile = 0;
enum tilename
{
    COMPASS,
    MAP,
    SATTRACK,
};

/**
 * @brief Get the active tile
 *
 * @param event
 */
static void get_act_tile(lv_event_t *event)
{
    if (is_ready)
    {
        is_scrolled = true;
        log_d("Free PSRAM: %d", ESP.getFreePsram());
        log_d("Used PSRAM: %d", ESP.getPsramSize() - ESP.getFreePsram());
        if (act_tile == MAP)
        {
            create_map_scr_sprites();
        }
    }
    else
    {
        is_ready = true;
    }

    lv_obj_t *acttile = lv_tileview_get_tile_act(tiles);
    lv_coord_t tile_x = lv_obj_get_x(acttile) / TFT_WIDTH;
    act_tile = tile_x;
}

/**
 * @brief Tile start scrolling event
 *
 * @param event
 */
static void scroll_tile(lv_event_t *event)
{
    is_scrolled = false;
    is_ready = false;

    delete_map_scr_sprites();
    delete_sat_info_sprites();
}

/**
 * @brief Update Main Screen
 *
 */
static void update_main_screen(lv_timer_t *t)
{
    if (is_scrolled && is_main_screen)
    {
        switch (act_tile)
        {
        case COMPASS:
#ifdef ENABLE_COMPASS
            heading = get_heading();
            lv_event_send(compass_heading, LV_EVENT_VALUE_CHANGED, NULL);
#endif

            if (GPS.location.isUpdated())
            {
                lv_event_send(latitude, LV_EVENT_VALUE_CHANGED, NULL);
                lv_event_send(longitude, LV_EVENT_VALUE_CHANGED, NULL);
            }
            if (GPS.altitude.isUpdated())
            {
                lv_event_send(altitude, LV_EVENT_VALUE_CHANGED, NULL);
            }

            if (GPS.speed.isUpdated())
                lv_event_send(speed_label, LV_EVENT_VALUE_CHANGED, NULL);

            break;

        case MAP:
            // if (GPS.location.isUpdated())
            lv_event_send(map_tile, LV_EVENT_REFRESH, NULL);
            break;

        case SATTRACK:
            lv_event_send(sat_track_tile, LV_EVENT_VALUE_CHANGED, NULL);
            break;

        default:
            break;
        }
    }
}
