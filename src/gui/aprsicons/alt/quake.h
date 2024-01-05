#include <pgmspace.h>



const char quake_map[] PROGMEM = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x24, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x24, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0xff, 0xff, 0xff, 0xff, 0x24, 0x24, 0x24, 0x24, 0xff, 0xff, 0xff, 0xff, 0x24, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0xff, 0xff, 0x24, 0x24, 0xff, 0xff, 0xff, 0xff, 0x24, 0x24, 0xff, 0xff, 0x24, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xff, 0xff, 0xff, 0x24, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x24, 0xff, 0xff, 0xff, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xff, 0xff, 0x24, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x24, 0xff, 0xff, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xff, 0xff, 0x24, 0xff, 0xff, 0xff, 0x24, 0x24, 0xff, 0xff, 0xff, 0x24, 0xff, 0xff, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xff, 0xff, 0x24, 0xff, 0xff, 0xff, 0x24, 0x24, 0xff, 0xff, 0xff, 0x24, 0xff, 0xff, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xff, 0xff, 0x24, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x24, 0xff, 0xff, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x24, 0xff, 0xff, 0xff, 0x24, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x24, 0xff, 0xff, 0xff, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0xff, 0xff, 0x24, 0x24, 0xff, 0xff, 0xff, 0xff, 0x24, 0x24, 0xff, 0xff, 0x24, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0xff, 0xff, 0xff, 0xff, 0x24, 0x24, 0x24, 0x24, 0xff, 0xff, 0xff, 0xff, 0x24, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x24, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x24, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xe4, 0x20, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xe4, 0x20, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x20, 0xe4, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0x20, 0xe4, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0xef, 0xef, 0xef, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};
