#include <pgmspace.h>



const char server_map[] PROGMEM = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x25, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x92, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x92, 0x25, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0x6d, 0x6d, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x25, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0x6d, 0x6d, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x49, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0xdb, 0x92, 0x92, 0x92, 0x92, 0xb7, 0x49, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x92, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0x92, 0x03, 0x03, 0x03, 0x03, 0xb7, 0x49, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x92, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0x92, 0x03, 0x03, 0x03, 0x03, 0xb7, 0x49, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x92, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0x92, 0x03, 0x03, 0x03, 0x03, 0xb7, 0x49, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x92, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x24, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xb6, 0x49, 0x6d, 0xb6, 0xdb, 0xd6, 0xd6, 0x92, 0x25, 0x00, 0x00, 
  0x00, 0x00, 0x49, 0xb7, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0xdb, 0x92, 0x49, 0x6e, 0x6e, 0x6e, 0x25, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x92, 0xdb, 0xdb, 0xdb, 0xdb, 0x92, 0x6e, 0x92, 0xb7, 0x6e, 0x24, 0x24, 0xff, 0xff, 0xff, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0x25, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x6d, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0xb3, 0x9c, 0x28, 0x42, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x63, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x31, 0x8c, 0x28, 0x42, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x63, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x31, 0x8c, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x52, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0xaa, 0x52, 0xaa, 0x52, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x6b, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0xb3, 0x9c, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x52, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0xaa, 0x52, 0xaa, 0x52, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0xeb, 0x5a, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0xb3, 0x9c, 0x28, 0x42, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf8, 0xc5, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0x76, 0xb5, 0x28, 0x42, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x31, 0x8c, 0x28, 0x42, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xef, 0x7b, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x35, 0xad, 0x28, 0x42, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x31, 0x8c, 0x28, 0x42, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xef, 0x7b, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x35, 0xad, 0x28, 0x42, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x31, 0x8c, 0x28, 0x42, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xef, 0x7b, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x35, 0xad, 0x28, 0x42, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x31, 0x8c, 0x28, 0x42, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x20, 0xf8, 0xc5, 0xf8, 0xc5, 0xf8, 0xc5, 0xf8, 0xc5, 0xf8, 0xc5, 0xb3, 0x9c, 0x28, 0x42, 0xeb, 0x5a, 0xb3, 0x9c, 0x59, 0xce, 0xb3, 0xd4, 0xb3, 0xd4, 0x31, 0x8c, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x76, 0xb5, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0x9a, 0xd6, 0x31, 0x8c, 0x86, 0x31, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x04, 0x21, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xef, 0x7b, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x31, 0x8c, 0x2c, 0x63, 0x31, 0x8c, 0x35, 0xad, 0x2c, 0x63, 0xe4, 0x20, 0xe4, 0x20, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0x21, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0xaa, 0x52, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x21, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xc7, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0x9c, 0xb3, 0x42, 0x28, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x2c, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0x8c, 0x31, 0x42, 0x28, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x2c, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0x8c, 0x31, 0x21, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0xaa, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0x52, 0xaa, 0x52, 0xaa, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x6d, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0x9c, 0xb3, 0x21, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0xaa, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0xad, 0x35, 0x52, 0xaa, 0x52, 0xaa, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x86, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x5a, 0xeb, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0xe7, 0x1c, 0x9c, 0xb3, 0x42, 0x28, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xc5, 0xf8, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0xb5, 0x76, 0x42, 0x28, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0x8c, 0x31, 0x42, 0x28, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x7b, 0xef, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0xad, 0x35, 0x42, 0x28, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0x8c, 0x31, 0x42, 0x28, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x7b, 0xef, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0xad, 0x35, 0x42, 0x28, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0x8c, 0x31, 0x42, 0x28, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0x7b, 0xef, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x1f, 0xad, 0x35, 0x42, 0x28, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0x8c, 0x31, 0x42, 0x28, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe4, 0xc5, 0xf8, 0xc5, 0xf8, 0xc5, 0xf8, 0xc5, 0xf8, 0xc5, 0xf8, 0x9c, 0xb3, 0x42, 0x28, 0x5a, 0xeb, 0x9c, 0xb3, 0xce, 0x59, 0xd4, 0xb3, 0xd4, 0xb3, 0x8c, 0x31, 0x21, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x39, 0xc7, 0xb5, 0x76, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0x7b, 0xef, 0xd6, 0x9a, 0x8c, 0x31, 0x31, 0x86, 0x63, 0x2c, 0x63, 0x2c, 0x63, 0x2c, 0x21, 0x04, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7b, 0xef, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0xce, 0x59, 0x8c, 0x31, 0x63, 0x2c, 0x8c, 0x31, 0xad, 0x35, 0x63, 0x2c, 0x20, 0xe4, 0x20, 0xe4, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x21, 0x04, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x42, 0x28, 0x52, 0xaa, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x20, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x63, 0x63, 0x63, 0xff, 0x63, 0x63, 0x63, 0xff, 0x63, 0x63, 0x63, 0xff, 0x63, 0x63, 0x63, 0xff, 0x63, 0x63, 0x63, 0xff, 0x63, 0x63, 0x63, 0xff, 0x21, 0x21, 0x21, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x39, 0x39, 0x39, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0x94, 0x94, 0x94, 0xff, 0x42, 0x42, 0x42, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x63, 0x63, 0x63, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0x84, 0x84, 0x84, 0xff, 0x42, 0x42, 0x42, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x63, 0x63, 0x63, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0x84, 0x84, 0x84, 0xff, 0x21, 0x21, 0x21, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x52, 0x52, 0x52, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0x52, 0x52, 0x52, 0xff, 0x52, 0x52, 0x52, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x6b, 0x6b, 0x6b, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0x94, 0x94, 0x94, 0xff, 0x21, 0x21, 0x21, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x52, 0x52, 0x52, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0x52, 0x52, 0x52, 0xff, 0x52, 0x52, 0x52, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x31, 0x31, 0x31, 0xff, 0x63, 0x63, 0x63, 0xff, 0x63, 0x63, 0x63, 0xff, 0x63, 0x63, 0x63, 0xff, 0x63, 0x63, 0x63, 0xff, 0x63, 0x63, 0x63, 0xff, 0x5a, 0x5a, 0x5a, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0xde, 0xde, 0xde, 0xff, 0x94, 0x94, 0x94, 0xff, 0x42, 0x42, 0x42, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0xad, 0xad, 0xad, 0xff, 0x42, 0x42, 0x42, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0x84, 0x84, 0x84, 0xff, 0x42, 0x42, 0x42, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0x42, 0x42, 0x42, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0x84, 0x84, 0x84, 0xff, 0x42, 0x42, 0x42, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0x42, 0x42, 0x42, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0x84, 0x84, 0x84, 0xff, 0x42, 0x42, 0x42, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0x42, 0x42, 0x42, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0x84, 0x84, 0x84, 0xff, 0x42, 0x42, 0x42, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0x94, 0x94, 0x94, 0xff, 0x42, 0x42, 0x42, 0xff, 0x5a, 0x5a, 0x5a, 0xff, 0x94, 0x94, 0x94, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0x94, 0x94, 0xce, 0xff, 0x94, 0x94, 0xce, 0xff, 0x84, 0x84, 0x84, 0xff, 0x21, 0x21, 0x21, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x39, 0x39, 0x39, 0xff, 0xad, 0xad, 0xad, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0xce, 0xce, 0xce, 0xff, 0x84, 0x84, 0x84, 0xff, 0x31, 0x31, 0x31, 0xff, 0x63, 0x63, 0x63, 0xff, 0x63, 0x63, 0x63, 0xff, 0x63, 0x63, 0x63, 0xff, 0x21, 0x21, 0x21, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0x84, 0x84, 0x84, 0xff, 0x63, 0x63, 0x63, 0xff, 0x84, 0x84, 0x84, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0x63, 0x63, 0x63, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x21, 0x21, 0x21, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x52, 0x52, 0x52, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x1d, 0x1d, 0x1d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};