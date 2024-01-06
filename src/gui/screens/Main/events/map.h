/**
 * @file map.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  Map screen events
 * @version 0.1.6
 * @date 2023-06-14
 */

bool useAlt=false;

void listDir(fs::FS &fs, const char * dirname, uint8_t levels){
  Serial.printf("Listing directory: %s\n", dirname);

  File root = fs.open(dirname);
  if(!root){
    Serial.println("Failed to open directory");
    return;
  }
  if(!root.isDirectory()){
    Serial.println("Not a directory");
    return;
  }

  File file = root.openNextFile();
  while(file){
    if(file.isDirectory()){
      Serial.print("  DIR : ");
      Serial.println(file.name());
      if(levels){
        listDir(fs, file.name(), levels -1);
      }
    } else {
      Serial.print("  FILE: ");
      Serial.print(file.name());
      Serial.print("  SIZE: ");
      Serial.println(file.size());
    }
     file = root.openNextFile();
  }
}


/**
 * @brief Map tile coordinates and zoom
 *
 */
MapTile CurrentMapTile;
MapTile RoundMapTile;

/**
 * @brief Navitagion Arrow position on screen
 *
 */
ScreenCoord NavArrow_position;

static const char *map_scale[] = {"5000 Km","2500 Km","1500 Km","700 Km","350 Km",
                                   "150 Km","100 Km","40 Km","20 Km","10 Km","5 Km",
                                   "2,5 Km","1,5 Km","700 m","350 m","150 m","80 m",
                                   "40 m","20 m","10 m"};

/**
 * @brief return latitude from GPS or sys env pre-built variable
 * @return latitude or 0.0 if not defined
 */
static double getLat()
{
  if (GPS.location.isValid())
    return GPS.location.lat();
  else
  {
#ifdef DEFAULT_LAT
    return DEFAULT_LAT;
#else
    return 0.0;
#endif
  }
}

/**
 * @brief return longitude from GPS or sys env pre-built variable
 * @return longitude or 0.0 if not defined
 */
static double getLon()
{
  if (GPS.location.isValid())
    return GPS.location.lng();
  else
  {
#ifdef DEFAULT_LON
    return DEFAULT_LON;
#else
    return 0.0;
#endif
  }
}

/**
 * @brief Update zoom value
 *
 * @param event
 */
static void get_zoom_value(lv_event_t *event)
{
  lv_obj_t *screen = lv_event_get_current_target(event);
  lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
  if (act_tile == MAP && is_main_screen)
  {
    switch (dir)
    {
    case LV_DIR_LEFT:
      break;
    case LV_DIR_RIGHT:
      break;
    case LV_DIR_TOP:
      if (zoom >= MIN_ZOOM && zoom < MAX_ZOOM)
      {
        zoom++;
        lv_event_send(map_tile, LV_EVENT_REFRESH, NULL);
      }
      break;
    case LV_DIR_BOTTOM:
      if (zoom <= MAX_ZOOM && zoom > MIN_ZOOM)
      {
        zoom--;
        lv_event_send(map_tile, LV_EVENT_REFRESH, NULL);
      }
      break;
    }
  }
}

static void zoom_in(lv_event_t *event)
{
  lv_obj_t *screen = lv_event_get_current_target(event);
  lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
  if (act_tile == MAP && is_main_screen)
  {
      if (zoom >= MIN_ZOOM && zoom < MAX_ZOOM)
      {
        zoom++;
        lv_event_send(map_tile, LV_EVENT_REFRESH, NULL);
      }
  }
}


static void zoom_out(lv_event_t *event)
{
  lv_obj_t *screen = lv_event_get_current_target(event);
  lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
  if (act_tile == MAP && is_main_screen)
  {
    if (zoom <= MAX_ZOOM && zoom > MIN_ZOOM)
    {
      zoom--;
      lv_event_send(map_tile, LV_EVENT_REFRESH, NULL);
    }
  }
}


/**
 * @brief Delete map screen sprites and release PSRAM
 *
 */
static void delete_map_scr_sprites()
{
  sprArrow.deleteSprite();
  map_rot.deleteSprite();
  zoom_spr.deleteSprite();
  test_spr.deleteSprite();
}

/**
 * @brief Create a map screen sprites
 *
 */
static void create_map_scr_sprites()
{
  // Map Sprite
  map_rot.createSprite(TFT_WIDTH-40, TFT_HEIGHT-27);
  map_rot.pushSprite(0, 27);
  // Arrow Sprite
  sprArrow.createSprite(60, 32);
  sprArrow.setColorDepth(16);
  sprArrow.setTextColor(TFT_DARKGREEN, TFT_LIGHTGREY);
  sprArrow.drawCenterString(userSettings.callsign, 30, 20);
  if(!userSettings.isAlt)
  { 
    sprArrow.pushImage(20, 0, 20, 20, (uint16_t *)iconResolver(userSettings.icon));
  }
  else
  {
    sprArrow.pushImage(20, 0, 20, 20, (uint16_t *)altIconResolver(userSettings.icon));
  }
  // Zoom Sprite
  zoom_spr.createSprite(48, 28);
  zoom_spr.setColorDepth(16);
  zoom_spr.pushImage(0, 0, 24, 24, (uint16_t *)zoom_ico);
}

/**
 * @brief Update map event
 *
 * @param event
 */
static void update_map(lv_event_t *event)
{
  CurrentMapTile = get_map_tile(getLon(), getLat(), zoom, 0, 0);

  if (strcmp(CurrentMapTile.file, OldMapTile.file) != 0 || CurrentMapTile.zoom != OldMapTile.zoom ||
      CurrentMapTile.tilex != OldMapTile.tilex || CurrentMapTile.tiley != OldMapTile.tiley)
  {
    is_map_draw = false;
    map_found = false;
    test_spr.deleteSprite();
    useAlt = !useAlt;
      test_spr.createSprite(TFT_WIDTH, TFT_HEIGHT);
  test_spr.setColorDepth(16);
  // uint8_t i=0;
  // for(int y=0; y<6; y++)
  // {
  //   for(int x=0; x<16; x++)
  //   {
  //     if(!useAlt)
  //     {
  //       test_spr.pushImage(x*20, y*20, 20, 20, (uint16_t*)iconResolver(i));
  //     }
  //     else
  //     {
  //       test_spr.pushImage(x*20, y*20, 20, 20, (uint16_t*)altIconResolver(i));
  //     }
  //     i++;
  //   }
  // }
    // map_spr.deleteSprite();
    // map_spr.createSprite(768, 768);
  }

  if (!is_map_draw)
  {
    OldMapTile.zoom = CurrentMapTile.zoom;
    OldMapTile.tilex = CurrentMapTile.tilex;
    OldMapTile.tiley = CurrentMapTile.tiley;
    OldMapTile.file = CurrentMapTile.file;

    listDir(SD, CurrentMapTile.dir, 0);
    log_v("TILE: %s", CurrentMapTile.file);
    log_v("ZOOM: %d", zoom);

    // Center Tile
    map_found = map_spr.drawPngFile(SD, CurrentMapTile.file, 256, 256);

    uint8_t centerX = 0;
    uint8_t centerY = 0;
    int8_t startX = centerX - 1;
    int8_t startY = centerY - 1;
    bool tileFound = false;

    if (map_found)
    {
      for (int y = startY; y <= startY + 2; y++)
      {
        for (int x = startX; x <= startX + 2; x++)
        {
          if (x == centerX && y == centerY)
          {
            // Skip Center Tile
            continue;
          }
          RoundMapTile = get_map_tile(getLon(), getLat(), zoom, x, y);
          tileFound = map_spr.drawPngFile(SD, RoundMapTile.file, (x - startX) * tileSize, (y - startY) * tileSize);
          if (!tileFound)
            map_spr.fillRect((x - startX) * tileSize, (y - startY) * tileSize, tileSize, tileSize, LVGL_BKG);
        }
      }
    }

    is_map_draw = true;
  }

  if (map_found)
  {
    NavArrow_position = coord_to_scr_pos(getLon(), getLat(), zoom);
    map_spr.setPivot(tileSize + NavArrow_position.posx, tileSize + NavArrow_position.posy);
    map_rot.pushSprite(0, 27);

#ifdef ENABLE_COMPASS
    heading = get_heading();
    map_spr.pushRotated(&map_rot, 360 - heading, TFT_TRANSPARENT);
    map_rot.fillRectAlpha(TFT_WIDTH - 48, 0, 48, 48, 95, TFT_BLACK);
    map_rot.pushImageRotateZoom(TFT_WIDTH - 24, 24, 24, 24, 360 - heading, 1, 1, 48, 48, (uint16_t *)mini_compass, TFT_BLACK);
#else
    map_spr.pushRotated(&map_rot, 0, TFT_TRANSPARENT);
#endif
    map_rot.setTextColor(TFT_WHITE, TFT_WHITE);

    map_rot.fillRectAlpha(0, 0, 50, 32, 95, TFT_BLACK);
    map_rot.pushImage(0, 4, 24, 24, (uint16_t *)zoom_ico, TFT_BLACK);
    map_rot.drawNumber(zoom, 26, 8, &fonts::FreeSansBold9pt7b);

    map_rot.fillRectAlpha(0, 342, 70, 32, 95, TFT_BLACK);
    map_rot.pushImage(0, 346, 24, 24, (uint16_t *)speed_ico, TFT_BLACK);
    map_rot.drawNumber((uint16_t)GPS.speed.kmph(), 26, 350, &fonts::FreeSansBold9pt7b);

    map_rot.fillRectAlpha(250, 342, 70, TFT_WIDTH - 245, 95, TFT_BLACK);
    map_rot.setTextSize(1);

    //  map_rot.createSprite(320, 374);
    //Original screen size was 320 * 374
    //New screen size is 240 * 320
    //Scaling: 0.667 * 0.75

    // map_rot.drawFastHLine(255,360,60);
    // map_rot.drawFastVLine(255,355,10);
    // map_rot.drawFastVLine(315,355,10);
    // map_rot.drawCenterString(map_scale[zoom], 285, 350);

    map_rot.drawFastHLine(TFT_WIDTH-120, TFT_HEIGHT-47, 60);
    map_rot.drawFastVLine(TFT_WIDTH-120, TFT_HEIGHT-52,10);
    map_rot.drawFastVLine(TFT_WIDTH-60, TFT_HEIGHT-52 ,10);
    map_rot.drawCenterString(map_scale[zoom], TFT_WIDTH-90, TFT_HEIGHT-57);

    sprArrow.pushRotated(&map_rot, 0, TFT_BLACK);
    test_spr.pushSprite(&map_rot, 0, 0, TFT_BLACK);
  }
}
