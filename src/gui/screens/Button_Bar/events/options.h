/**
 * @file options.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  Waypoint, track events
 * @version 0.1.6
 * @date 2023-06-14
 */

/**
 * @brief Options box close event
 *
 * @param event
 */
static void close_option(lv_event_t *event)
{
    is_main_screen = true;
    is_option_loaded = false;
}

/**
 * @brief Save Option
 * 
 * @param event 
 */
static void save_option(lv_event_t *event)
{
    log_v("Save Option");
}

/**
 * @brief Load Option
 * 
 * @param event 
 */
static void load_option(lv_event_t *event)
{
    log_v("Load Option");
}

/**
 * @brief Delete Option
 * 
 * @param event 
 */
static void delete_option(lv_event_t *event)
{
    log_v("Delete Option");
}