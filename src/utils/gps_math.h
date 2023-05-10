/**
 * @file gps_math.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  Math and various functions
 * @version 0.1.3
 * @date 2023-05-10
 */

/**
 * @brief Variables to store mid point between 2 coordinates
 *
 */
double d_midlat = 0;
double d_midlon = 0;

/**
 * @brief Structure to store position on screen (tile) of GPS Coordinates
 *
 */
struct ScreenCoord
{
  uint16_t posx;
  uint16_t posy;
};

/**
 * @brief Structure to store Map tile filename, actual tileX, tileY and zoom level
 *
 */
struct MapTile
{
  char *file;
  uint32_t tilex;
  uint32_t tiley;
  uint8_t zoom;
};

/**
 * @brief Function to calculate the distance in meters given 2 coordinates (latitude and longitude)
 *
 * @param f_lat1 -> Latitude 1
 * @param f_lon1 -> Longitude 1
 * @param f_lat2 -> Latitude 2
 * @param f_lon2 -> Longitude 2
 * @return float -> Distance in meters
 */
float calc_dist(float f_lat1, float f_lon1, float f_lat2, float f_lon2)
{
  float f_x = 69.1 * (f_lat2 - f_lat1);
  float f_y = 69.1 * (f_lon2 - f_lon1) * cos(f_lat1 / 57.3);
  return (float)sqrt((float)(f_x * f_x) + (float)(f_y * f_y)) * 1609.344;
}

/**
 * @brief Function to calculate the midpoint given 2 coordinates (latitude and longitude)
 *
 * @param f_lat1 -> Latitude 1
 * @param f_lon1 -> Longitude 1
 * @param f_lat2 -> Latitude 2
 * @param f_lon2 -> Longitude 2
 */
void calc_mid_point(float f_lat1, float f_lon1, float f_lat2, float f_lon2)
{

  float dLon = (radians(f_lon2) - radians(f_lon1));
  float cosLat1 = cos(radians(f_lat1));
  float cosLat2 = cos(radians(f_lat2));
  float sinLat1 = sin(radians(f_lat1));
  float sinLat2 = sin(radians(f_lat2));
  float Bx = cosLat2 * cos(dLon);
  float By = cosLat2 * sin(dLon);

  d_midlat = degrees(atan2(sinLat1 + sinLat2, sqrt((cosLat1 + Bx) * (cosLat1 + Bx) + By * By)));
  d_midlon = degrees(radians(f_lon1) + atan2(By, cosLat1 + Bx));
}

/**
 * @brief float MAP
 *
 * @param x -> input value
 * @param in_min -> min input value
 * @param in_max -> max input value
 * @param out_min -> min output value
 * @param out_max -> max output value
 * @return float -> output value
 */
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

/**
 * @brief RAD to DEG conversion
 *
 * @param rad -> radians
 * @return double -> degrees
 */
double RADtoDEG(double rad)
{
  return rad * 180 / PI;
}

/**
 * @brief DEG to RAD conversion
 *
 * @param deg -> degrees
 * @return double -> radians
 */
double DEGtoRAD(double deg)
{
  return deg * PI / 180;
}

/**
 * @brief Get TileY for OpenStreeMap files
 *
 * @param f_lon -> longitude
 * @param zoom -> zoom
 * @return X value (folder)
 */
uint32_t lon2tilex(double f_lon, uint8_t zoom)
{
  return (uint32_t)(floor((f_lon + 180.0) / 360.0 * pow(2.0, zoom)));
}

/**
 * @brief Get TileY for OpenStreetMap files
 *
 * @param f_lat -> latitude
 * @param zoom  -> zoom
 * @return Y value (file)
 */
uint32_t lat2tiley(double f_lat, uint8_t zoom)
{
  return (uint32_t)(floor((1.0 - log(tan(f_lat * M_PI / 180.0) + 1.0 / cos(f_lat * M_PI / 180.0)) / M_PI) / 2.0 * pow(2.0, zoom)));
}

/**
 * @brief Get pixel X position from OpenStreetMap
 *
 * @param f_lon -> longitude
 * @param zoom -> zoom
 * @return X position
 */
uint16_t lon2posx(float f_lon, uint8_t zoom)
{
  return ((uint16_t)(((f_lon + 180.0) / 360.0 * (pow(2.0, zoom)) * 256)) % 256);
}

/**
 * @brief Get pixel Y position from OpenStreetMap
 *
 * @param f_lat -> latitude
 * @param zoom -> zoom
 * @return Y position
 */
uint16_t lat2posy(float f_lat, uint8_t zoom)
{
  return ((uint16_t)(((1.0 - log(tan(f_lat * M_PI / 180.0) + 1.0 / cos(f_lat * M_PI / 180.0)) / M_PI) / 2.0 * (pow(2.0, zoom)) * 256)) % 256);
}

/**
 * @brief Latitude GGºMM'SS" to string conversion
 *
 * @param lat  -> Latitude
 * @return char* -> String
 */
char *Latitude_formatString(double lat)
{
  char N_S = PSTR('N');
  double absLatitude = lat;
  uint16_t deg;
  uint8_t min;
  static char s_buf[64];
  if (lat < 0)
  {
    N_S = PSTR('S');
    absLatitude = fabs(lat);
  }
  deg = (uint16_t)absLatitude;
  absLatitude = (absLatitude - deg) * 60;
  min = (uint8_t)absLatitude;
  absLatitude = (absLatitude - min) * 60;
  sprintf(s_buf, PSTR("%03d\xC2\xB0 %02d\' %.2f\" %c"), deg, min, absLatitude, N_S);
  return s_buf;
}

/**
 * @brief Longitude GGºMM'SS" to string conversion
 *
 * @param lon  -> Longitude
 * @return char* -> String
 */
char *Longitude_formatString(double lon)
{
  char E_W = PSTR('E');
  double absLongitude = lon;
  uint16_t deg;
  uint8_t min;
  static char s_buf[64];
  if (lon < 0)
  {
    E_W = PSTR('W');
    absLongitude = fabs(lon);
  }
  deg = (uint16_t)absLongitude;
  absLongitude = (absLongitude - deg) * 60;
  min = (uint8_t)absLongitude;
  absLongitude = (absLongitude - min) * 60;
  sprintf(s_buf, PSTR("%03d\xC2\xB0 %02d\' %.2f\" %c"), deg, min, absLongitude, E_W);
  return s_buf;
}

/**
 * @brief Get the map tile structure from GPS Coordinates
 *
 * @param lon -> Longitude
 * @param lat -> Latitude
 * @param zoom_level -> zoom level
 * @param off_x -> Tile Offset X
 * @param off_y -> Tile Offset Y
 * @return MapTile -> Map Tile structure
 */
MapTile get_map_tile(double lon, double lat, uint8_t zoom_level, int16_t off_x, int16_t off_y)
{
  static char s_file[40] = "";
  uint32_t x = lon2tilex(lon, zoom_level) + off_x;
  uint32_t y = lat2tiley(lat, zoom_level) + off_y;

  sprintf(s_file, PSTR("/MAP/%d/%d/%d.png"), zoom_level, x, y);
  MapTile data;
  data.file = s_file;
  data.tilex = x;
  data.tiley = y;
  data.zoom = zoom_level;
  return data;
}

/**
 * @brief Convert GPS Coordinates to screen position (with offsets)
 *
 * @param offset_x -> Offset x position
 * @param offset_y -> Offset y position
 * @param lon -> Longitude
 * @param lat -> Latitude
 * @param zoom_level -> Zoom level
 * @return ScreenCoord -> Screen position
 */
ScreenCoord coord_to_scr_pos(uint16_t offset_x, uint16_t offset_y, double lon, double lat, uint8_t zoom_level)
{
  ScreenCoord data;
  data.posx = lon2posx(lon, zoom_level) + offset_x;
  data.posy = lat2posy(lat, zoom_level) + offset_y;
  return data;
}