/*
       @file       A_Pantallas.h
       @brief      Mostrar diferentes pantallas

       @author     Jordi Gauchia

       @date       08/12/2021
*/

// **********************************************
//  Muestra pantalla principal
// **********************************************
void show_main_screen()
{
  if (!is_draw)
  {
    tft.fillScreen(TFT_WHITE);
    tft.drawLine(0, 40, 240, 40, TFT_BLACK);
    tft.setTextColor(TFT_BLACK, TFT_WHITE);
    tft.writecommand(0x28);
    drawBmp("/GFX/POSICION.BMP", 5, 44, true);
    tft.writecommand(0x29);
    tft.setSwapBytes(true);
    show_sat_icon(180,0);
    tft.pushImage(95,135 , 50, 58, compass_arrow);
    tft.setSwapBytes(false);
    create_compass_sprite();
    is_compass_screen = true;
    is_draw = true;
  } 
  show_Compass();
  tft.startWrite();
  Latitude_formatString(50, 45, 2, GPS.location.lat());
  Longitude_formatString(50, 60, 2, GPS.location.lng());
  tft.endWrite(); 
  show_notify_bar(10, 10);
}

// **********************************************
//  Muestra pantalla tracking satelites
// **********************************************
void show_sat_track_screen()
{
  if (!is_draw)
  {
    tft.startWrite();
    sat_sprite.deleteSprite();
    sat_sprite.createSprite(8, 8);
    sat_sprite.fillScreen(TFT_WHITE);
    tft.fillScreen(TFT_WHITE);
    tft.setTextColor(TFT_BLACK, TFT_WHITE);
    tft.fillRect(0, 159, 240, 2, TFT_BLACK);
    tft.fillRect(0, 240, 240, 2, TFT_BLACK);
    for (int i = 0; i < 7; i++)
    {
      tft.drawLine(0, 224 - (i * 10), 240, 224 - (i * 10), TFT_LIGHTGREY);
      tft.drawLine(0, 305 - (i * 10), 240, 305 - (i * 10), TFT_LIGHTGREY);
    }
    tft.readRect(0, 159, 25, 80, snr_bkg);
    tft.drawCircle(165, 80, 60, TFT_BLACK);
    tft.drawCircle(165, 80, 30, TFT_BLACK);
    tft.drawCircle(165, 80, 1, TFT_BLACK);
    tft.drawString("N", 162, 12, 2);
    tft.drawString("S", 162, 132, 2);
    tft.drawString("O", 102, 72, 2);
    tft.drawString("E", 222, 72, 2);
    tft.drawString("Altura", 5, 115, 2);
    tft.drawString("HDOP", 5, 75, 2);
    tft.drawString("Sat:", 5, 50, 2);
    tft.endWrite();
    is_sat_screen = true;
    is_draw = true;
  }
  show_sat_tracking();
}

// **********************************************
//  Muestra pantalla mapa
// **********************************************
void show_map_screen()
{
  if (!is_draw)
  {
    tft.fillScreen(TFT_WHITE);
    tft.drawLine(0, 40, 240, 40, TFT_BLACK);
    tft.setTextColor(TFT_BLACK, TFT_WHITE);  
    tft.drawString("ZOOM:", 5, 45, 2);
    tft.setSwapBytes(true);
    show_sat_icon(180,0);
    tft.setSwapBytes(false);
    is_map_screen = true;
    is_draw = true;
  } 
  show_notify_bar(10, 10);
  if (is_gps_fixed)
  {
    show_map(0,64,GPS.location.lng(),GPS.location.lat());
    sprintf(s_buf, "%2d", zoom);
    tft.drawString(s_buf,45,45,2);
  }
}

// **********************************************
//  Muestra pantalla menus
// **********************************************
void show_menu_screen()
{
  if (!is_draw)
  {
    tft.writecommand(0x28);
    tft.fillScreen(TFT_WHITE);
    drawBmp("/GFX/BOT_TRAC.BMP", 20, 15, true);
    drawBmp("/GFX/BOT_NAV.BMP", 20, 60, true);
    drawBmp("/GFX/BOT_MAPA.BMP", 20, 105, true);
    drawBmp("/GFX/BOT_BRUJ.BMP", 20, 150, true);
    drawBmp("/GFX/BOT_LOG.BMP", 20, 195, true);
    drawBmp("/GFX/BOT_CFG.BMP", 20, 240, true);
    tft.writecommand(0x29);
    tft.setTextColor(TFT_BLACK, TFT_WHITE);
    show_sat_icon(180,282);
    is_menu_screen = true;
    is_draw = true;
  }
  show_notify_bar(10, 292);
}
