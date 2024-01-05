#include <pgmspace.h>



const char island_map[] PROGMEM = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfc, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0xfc, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x18, 0x18, 0xfc, 0xfc, 0x18, 0x18, 0x68, 0x0c, 0xfc, 0x18, 0x18, 0xfc, 0x18, 0xff, 0x18, 0x18, 0x00, 0x00, 
  0x00, 0x00, 0x18, 0xfc, 0x18, 0x18, 0x18, 0xfc, 0x68, 0x68, 0x18, 0xfc, 0x18, 0x00, 0xfc, 0x18, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x00, 0x18, 0xfc, 0x00, 0x68, 0x68, 0x18, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x68, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xec, 0xad, 0xec, 0xad, 0x68, 0x68, 0xec, 0xad, 0xec, 0xad, 0xec, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0x00, 0x00, 
  0x00, 0x00, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0x00, 0x00, 
  0x00, 0x00, 0x17, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0xec, 0xad, 0x17, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x17, 0xec, 0x17, 0x17, 0x17, 0xec, 0x17, 0x17, 0x17, 0xec, 0xad, 0x17, 0xad, 0x17, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x17, 0x03, 0x17, 0x03, 0x17, 0x03, 0x17, 0x03, 0x17, 0x03, 0x17, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x20, 0x03, 0x20, 0x03, 0x20, 0x03, 0x80, 0x06, 0xe0, 0xff, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x06, 0x80, 0x06, 0xe0, 0xff, 0xe0, 0xff, 0x80, 0x06, 0x80, 0x06, 0x80, 0x61, 0x20, 0x03, 0xe0, 0xff, 0x80, 0x06, 0x80, 0x06, 0xe0, 0xff, 0x80, 0x06, 0xdf, 0xff, 0x80, 0x06, 0x80, 0x06, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x06, 0xe0, 0xff, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0xe0, 0xff, 0x80, 0x61, 0x80, 0x61, 0x80, 0x06, 0xe0, 0xff, 0x80, 0x06, 0x00, 0x00, 0xe0, 0xff, 0x80, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00, 0x80, 0x06, 0xe0, 0xff, 0x00, 0x00, 0x80, 0x61, 0x80, 0x61, 0x80, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00, 0x80, 0x61, 0x80, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x61, 0x80, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x61, 0x80, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x61, 0x80, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x80, 0x61, 0x80, 0x61, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x04, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0x20, 0xfb, 0x26, 0xa3, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0xff, 0x04, 0x20, 0xfb, 0xff, 0x04, 0xff, 0x04, 0xff, 0x04, 0x20, 0xfb, 0xff, 0x04, 0xff, 0x04, 0xff, 0x04, 0x20, 0xfb, 0x26, 0xa3, 0xff, 0x04, 0x26, 0xa3, 0xff, 0x04, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0xff, 0x04, 0x1a, 0x00, 0xff, 0x04, 0x1a, 0x00, 0xff, 0x04, 0x1a, 0x00, 0xff, 0x04, 0x1a, 0x00, 0xff, 0x04, 0x1a, 0x00, 0xff, 0x04, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x03, 0x20, 0x03, 0x20, 0x03, 0x20, 0x06, 0x80, 0xff, 0xe0, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x06, 0x80, 0xff, 0xe0, 0xff, 0xe0, 0x06, 0x80, 0x06, 0x80, 0x61, 0x80, 0x03, 0x20, 0xff, 0xe0, 0x06, 0x80, 0x06, 0x80, 0xff, 0xe0, 0x06, 0x80, 0xff, 0xdf, 0x06, 0x80, 0x06, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0xff, 0xe0, 0x06, 0x80, 0x06, 0x80, 0x06, 0x80, 0xff, 0xe0, 0x61, 0x80, 0x61, 0x80, 0x06, 0x80, 0xff, 0xe0, 0x06, 0x80, 0x00, 0x00, 0xff, 0xe0, 0x06, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x00, 0x00, 0x06, 0x80, 0xff, 0xe0, 0x00, 0x00, 0x61, 0x80, 0x61, 0x80, 0x06, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x00, 0x00, 0x61, 0x80, 0x61, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x80, 0x61, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x80, 0x61, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x80, 0x61, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0x61, 0x80, 0x61, 0x80, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0xff, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0xfb, 0x20, 0xa3, 0x26, 0x04, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x04, 0xff, 0xfb, 0x20, 0x04, 0xff, 0x04, 0xff, 0x04, 0xff, 0xfb, 0x20, 0x04, 0xff, 0x04, 0xff, 0x04, 0xff, 0xfb, 0x20, 0xa3, 0x26, 0x04, 0xff, 0xa3, 0x26, 0x04, 0xff, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x04, 0xff, 0x00, 0x1a, 0x04, 0xff, 0x00, 0x1a, 0x04, 0xff, 0x00, 0x1a, 0x04, 0xff, 0x00, 0x1a, 0x04, 0xff, 0x00, 0x1a, 0x04, 0xff, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x63, 0x00, 0xff, 0x00, 0x63, 0x00, 0xff, 0x00, 0x63, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x63, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xce, 0x00, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xce, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x31, 0x63, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0xff, 0x9c, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xce, 0x00, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0x00, 0x63, 0xff, 0xff, 0xff, 0x9c, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0x00, 0x63, 0xff, 0xff, 0xff, 0x9c, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0x00, 0x63, 0xff, 0xff, 0x31, 0x63, 0x9c, 0xff, 0xff, 0x9c, 0x00, 0xff, 0x31, 0x63, 0x9c, 0xff, 0xff, 0x9c, 0x00, 0xff, 0xce, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xce, 0x00, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0xce, 0x00, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0xce, 0x00, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0xce, 0x00, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0xce, 0x00, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0xce, 0x00, 0x00, 0xff, 0xff, 0x9c, 0x00, 0xff, 0xce, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};
