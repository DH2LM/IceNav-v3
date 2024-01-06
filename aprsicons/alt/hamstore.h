#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_HAMSTORE
#define LV_ATTRIBUTE_IMG_HAMSTORE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_HAMSTORE uint8_t hamstore_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xff, 0xe0, 0xe0, 0xff, 0xe0, 0xe0, 0xff, 0xe0, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xff, 0xe0, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xff, 0xe0, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xff, 0xe0, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xdb, 0xdb, 0xdb, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xdb, 0xdb, 0xdb, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xdb, 0xdb, 0xdb, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xdb, 0xdb, 0xdb, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xdb, 0xdb, 0xdb, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x9e, 0xf7, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xf7, 0x9e, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xd6, 0x9a, 0xd6, 0x9a, 0xd6, 0x9a, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xef, 0xef, 0xef, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0x00, 0x00, 0xde, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0xce, 0xce, 0xce, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0xde, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};

const lv_img_dsc_t hamstore = {
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 400 * LV_COLOR_SIZE / 8,
  .data = hamstore_map,
};