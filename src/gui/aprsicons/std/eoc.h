#include <pgmspace.h>



const char eoc_map[] PROGMEM = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0xc0, 0xc0, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x49, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x49, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0xc0, 0xff, 0xff, 0xc0, 0xc0, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0xc0, 0xff, 0xc0, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0x49, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0xc0, 0xff, 0xc0, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0xc0, 0xff, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0xc0, 0xff, 0xc0, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0xc0, 0xff, 0xc0, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0x49, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0xc0, 0xff, 0xff, 0xc0, 0xc0, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x49, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0xdf, 0xff, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0xdf, 0xff, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0xdf, 0xff, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0xdf, 0xff, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xff, 0xdf, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xff, 0xdf, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xff, 0xdf, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xff, 0xdf, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0xd0, 0x00, 0x31, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x00, 0x00, 0xce, 0xff, 0x31, 0x31, 0x31, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};
