#include <pgmspace.h>



const char sstv_map[] PROGMEM = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0x24, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0xf5, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0x24, 0xf5, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xb6, 0xb6, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xb6, 0xb6, 0x24, 0xf5, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xb6, 0xbf, 0xbf, 0xbf, 0x24, 0x24, 0x24, 0x24, 0xbf, 0xbf, 0xbf, 0xb6, 0x24, 0xf5, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xb6, 0xbf, 0xbf, 0x24, 0xfe, 0xfe, 0xfe, 0xfe, 0x24, 0xbf, 0xbf, 0xb6, 0x24, 0xf5, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xb6, 0xbf, 0x24, 0xfe, 0x24, 0xfe, 0xfe, 0x24, 0xfe, 0x24, 0xbf, 0xb6, 0x24, 0xf5, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xb6, 0xbf, 0x24, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x24, 0xbf, 0xb6, 0x24, 0xf5, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xb6, 0xbf, 0x24, 0xfe, 0x24, 0x24, 0x24, 0x24, 0xfe, 0x24, 0xbf, 0xb6, 0x24, 0xf5, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xb6, 0xbf, 0xbf, 0x24, 0xfe, 0xfe, 0xfe, 0xfe, 0x24, 0xbf, 0xbf, 0xb6, 0x24, 0xf5, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xb6, 0xbf, 0xbf, 0xbf, 0x24, 0x24, 0x24, 0x24, 0xbf, 0xbf, 0xbf, 0xb6, 0x24, 0xf5, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xb6, 0xb6, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xb6, 0xb6, 0x24, 0xf5, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0x24, 0x24, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe4, 0x20, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe6, 0xfc, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xe4, 0x20, 0xe6, 0xfc, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf4, 0xa4, 0xf4, 0xa4, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xf4, 0xa4, 0xf4, 0xa4, 0xe4, 0x20, 0xe6, 0xfc, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf4, 0xa4, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xf4, 0xa4, 0xe4, 0x20, 0xe6, 0xfc, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf4, 0xa4, 0xff, 0xa7, 0xff, 0xa7, 0xe4, 0x20, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xe4, 0x20, 0xff, 0xa7, 0xff, 0xa7, 0xf4, 0xa4, 0xe4, 0x20, 0xe6, 0xfc, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf4, 0xa4, 0xff, 0xa7, 0xe4, 0x20, 0xf4, 0xff, 0xe4, 0x20, 0xf4, 0xff, 0xf4, 0xff, 0xe4, 0x20, 0xf4, 0xff, 0xe4, 0x20, 0xff, 0xa7, 0xf4, 0xa4, 0xe4, 0x20, 0xe6, 0xfc, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf4, 0xa4, 0xff, 0xa7, 0xe4, 0x20, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xe4, 0x20, 0xff, 0xa7, 0xf4, 0xa4, 0xe4, 0x20, 0xe6, 0xfc, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf4, 0xa4, 0xff, 0xa7, 0xe4, 0x20, 0xf4, 0xff, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xf4, 0xff, 0xe4, 0x20, 0xff, 0xa7, 0xf4, 0xa4, 0xe4, 0x20, 0xe6, 0xfc, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf4, 0xa4, 0xff, 0xa7, 0xff, 0xa7, 0xe4, 0x20, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xe4, 0x20, 0xff, 0xa7, 0xff, 0xa7, 0xf4, 0xa4, 0xe4, 0x20, 0xe6, 0xfc, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf4, 0xa4, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xf4, 0xa4, 0xe4, 0x20, 0xe6, 0xfc, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf4, 0xa4, 0xf4, 0xa4, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xf4, 0xa4, 0xf4, 0xa4, 0xe4, 0x20, 0xe6, 0xfc, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xe4, 0x20, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0xfc, 0xe6, 0x20, 0xe4, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0xfc, 0xe6, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0x20, 0xe4, 0xfc, 0xe6, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa4, 0xf4, 0xa4, 0xf4, 0x20, 0xe4, 0xfc, 0xe6, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xa4, 0xf4, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa4, 0xf4, 0x20, 0xe4, 0xfc, 0xe6, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xa4, 0xf4, 0xa7, 0xff, 0xa7, 0xff, 0x20, 0xe4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0x20, 0xe4, 0xa7, 0xff, 0xa7, 0xff, 0xa4, 0xf4, 0x20, 0xe4, 0xfc, 0xe6, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xa4, 0xf4, 0xa7, 0xff, 0x20, 0xe4, 0xff, 0xf4, 0x20, 0xe4, 0xff, 0xf4, 0xff, 0xf4, 0x20, 0xe4, 0xff, 0xf4, 0x20, 0xe4, 0xa7, 0xff, 0xa4, 0xf4, 0x20, 0xe4, 0xfc, 0xe6, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xa4, 0xf4, 0xa7, 0xff, 0x20, 0xe4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0x20, 0xe4, 0xa7, 0xff, 0xa4, 0xf4, 0x20, 0xe4, 0xfc, 0xe6, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xa4, 0xf4, 0xa7, 0xff, 0x20, 0xe4, 0xff, 0xf4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0xff, 0xf4, 0x20, 0xe4, 0xa7, 0xff, 0xa4, 0xf4, 0x20, 0xe4, 0xfc, 0xe6, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xa4, 0xf4, 0xa7, 0xff, 0xa7, 0xff, 0x20, 0xe4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0xff, 0xf4, 0x20, 0xe4, 0xa7, 0xff, 0xa7, 0xff, 0xa4, 0xf4, 0x20, 0xe4, 0xfc, 0xe6, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xa4, 0xf4, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa4, 0xf4, 0x20, 0xe4, 0xfc, 0xe6, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa7, 0xff, 0xa4, 0xf4, 0xa4, 0xf4, 0x20, 0xe4, 0xfc, 0xe6, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0xa4, 0xf4, 0x20, 0xe4, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0xff, 0xff, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x31, 0x9c, 0xff, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};
