#include <pgmspace.h>



const char novan_map[] PROGMEM = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1b, 0xdb, 0xdb, 0xdb, 0x1b, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1b, 0xdb, 0xdb, 0xdb, 0x1b, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1b, 0xdb, 0xdb, 0xdb, 0x1b, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x00, 0x00, 
  0x00, 0x00, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x00, 0x00, 
  0x00, 0x00, 0x6d, 0x1b, 0x24, 0x24, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x24, 0x24, 0x1b, 0x6d, 0x00, 0x00, 
  0x00, 0x00, 0x1b, 0x24, 0xdb, 0xdb, 0x24, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x24, 0xdb, 0xdb, 0x24, 0x1b, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0xdb, 0xdb, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0xdb, 0xdb, 0x24, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x05, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0xff, 0x05, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x05, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0xff, 0x05, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x05, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0xff, 0x05, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xeb, 0x5a, 0xff, 0x05, 0xe4, 0x20, 0xe4, 0x20, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xe4, 0x20, 0xe4, 0x20, 0xff, 0x05, 0xeb, 0x5a, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x05, 0xe4, 0x20, 0x9a, 0xd6, 0x9a, 0xd6, 0xe4, 0x20, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xe4, 0x20, 0x9a, 0xd6, 0x9a, 0xd6, 0xe4, 0x20, 0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9a, 0xd6, 0x9a, 0xd6, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0x9a, 0xd6, 0x9a, 0xd6, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0x05, 0xff, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0x05, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0x05, 0xff, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0x05, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0x05, 0xff, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0x05, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x5a, 0xeb, 0x05, 0xff, 0x20, 0xe4, 0x20, 0xe4, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x20, 0xe4, 0x20, 0xe4, 0x05, 0xff, 0x5a, 0xeb, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0x20, 0xe4, 0xd6, 0x9a, 0xd6, 0x9a, 0x20, 0xe4, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x05, 0xff, 0x20, 0xe4, 0xd6, 0x9a, 0xd6, 0x9a, 0x20, 0xe4, 0x05, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xd6, 0x9a, 0xd6, 0x9a, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xd6, 0x9a, 0xd6, 0x9a, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xef, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x5a, 0x5a, 0x5a, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x5a, 0x5a, 0x5a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xff, 0xbd, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};
