#include <pgmspace.h>



const char laptop_map[] PROGMEM = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdf, 0x25, 0x49, 0x6d, 0x92, 0xb7, 0xfb, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb7, 0x6d, 0x6e, 0x6e, 0x6e, 0x69, 0x4d, 0x49, 0x6e, 0xb6, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x69, 0x25, 0x25, 0x45, 0x49, 0x6d, 0x72, 0x6e, 0x6d, 0x49, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x72, 0x6d, 0x49, 0x49, 0x29, 0x29, 0x49, 0x25, 0x25, 0x92, 0x6e, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x8e, 0x4d, 0x29, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x92, 0x92, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x72, 0x69, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x6d, 0x6e, 0xb7, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdf, 0x6e, 0x69, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x6e, 0x8e, 0xdb, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0x92, 0xdb, 0xdf, 0xb7, 0x92, 0x6d, 0x49, 0x49, 0x49, 0x92, 0x6d, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0x72, 0xb6, 0xb6, 0x6e, 0x8e, 0xb6, 0xdb, 0xfb, 0xdb, 0x92, 0x6e, 0x92, 0x92, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xbb, 0x6e, 0xdf, 0xff, 0x92, 0x6e, 0x6d, 0x6d, 0x6d, 0x6e, 0xb6, 0xdb, 0xff, 0x6e, 0xdb, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x69, 0xff, 0xff, 0xff, 0xfb, 0xdb, 0xb6, 0x92, 0x6e, 0x4d, 0x69, 0xb7, 0xdb, 0x6d, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x92, 0x6d, 0xb6, 0xff, 0xdb, 0xdb, 0xdb, 0xdf, 0xdb, 0xb6, 0xb7, 0xff, 0x69, 0x92, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xfb, 0x6e, 0x49, 0x92, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6e, 0x49, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0x6d, 0x45, 0x8e, 0xdb, 0xff, 0xff, 0x92, 0x21, 0xdf, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0x6e, 0x25, 0x6d, 0x92, 0x21, 0xdb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x92, 0x24, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0xce, 0x45, 0x29, 0xc7, 0x39, 0xa9, 0x52, 0xaf, 0x73, 0x36, 0xa5, 0x9d, 0xde, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0x9c, 0xeb, 0x52, 0x2c, 0x63, 0x6d, 0x5b, 0xed, 0x62, 0x6a, 0x5a, 0xaa, 0x4a, 0x29, 0x4a, 0xed, 0x5a, 0xf4, 0xa4, 0x5e, 0xef, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf1, 0x7b, 0x6a, 0x5a, 0x04, 0x21, 0x04, 0x21, 0x45, 0x31, 0x28, 0x4a, 0xeb, 0x52, 0xad, 0x6b, 0x6c, 0x6b, 0xeb, 0x62, 0x29, 0x4a, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf7, 0x32, 0x6c, 0xa9, 0x5a, 0x86, 0x31, 0x87, 0x31, 0xc6, 0x29, 0x86, 0x21, 0x87, 0x31, 0x46, 0x29, 0x45, 0x21, 0xf1, 0x7b, 0xec, 0x5a, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xf7, 0x6f, 0x7b, 0xe9, 0x4a, 0x87, 0x29, 0x87, 0x39, 0xc8, 0x41, 0xc7, 0x39, 0xc7, 0x39, 0xc6, 0x39, 0xc7, 0x41, 0x2f, 0x74, 0x31, 0x74, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1d, 0xe7, 0xae, 0x63, 0x28, 0x52, 0xc8, 0x31, 0x27, 0x3a, 0xc8, 0x39, 0xc7, 0x39, 0x28, 0x3a, 0xc7, 0x39, 0xaa, 0x52, 0x6e, 0x63, 0x36, 0xad, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdc, 0xce, 0x6e, 0x63, 0x69, 0x52, 0x87, 0x31, 0xc7, 0x39, 0xc8, 0x39, 0x28, 0x42, 0x29, 0x4a, 0xc8, 0x39, 0x6d, 0x6b, 0xec, 0x72, 0xfa, 0xd5, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb9, 0xbd, 0x33, 0x8c, 0xf9, 0xcd, 0xdb, 0xce, 0x76, 0xad, 0xae, 0x73, 0xaa, 0x52, 0x28, 0x3a, 0xc7, 0x39, 0xc8, 0x31, 0xef, 0x8b, 0x2b, 0x5b, 0x9e, 0xef, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1d, 0xdf, 0xae, 0x63, 0xb3, 0xa4, 0xf3, 0xa4, 0x6d, 0x5b, 0x6e, 0x73, 0xf4, 0xa4, 0x59, 0xc6, 0x9a, 0xde, 0xb7, 0xbd, 0x32, 0x8c, 0x6d, 0x63, 0xad, 0x73, 0xb1, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xb8, 0xad, 0x6e, 0x6b, 0xda, 0xce, 0x9e, 0xef, 0x73, 0x94, 0x2c, 0x63, 0xeb, 0x52, 0xeb, 0x52, 0xeb, 0x5a, 0x6d, 0x6b, 0xf3, 0xa4, 0xf9, 0xcd, 0xdd, 0xe6, 0xed, 0x62, 0xb9, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x68, 0x52, 0x9e, 0xf7, 0xdf, 0xff, 0x1c, 0xe7, 0x9a, 0xde, 0xf9, 0xc5, 0xf4, 0xa4, 0xae, 0x73, 0xec, 0x62, 0xea, 0x4a, 0x68, 0x52, 0xb5, 0xac, 0xf9, 0xbd, 0xaa, 0x52, 0xdf, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x74, 0x94, 0xaa, 0x52, 0xf3, 0xa4, 0x1d, 0xdf, 0xf9, 0xc5, 0xf8, 0xc5, 0xf8, 0xc5, 0xdb, 0xd6, 0x9a, 0xce, 0xb3, 0x9c, 0x36, 0xa5, 0x5d, 0xe7, 0x6a, 0x52, 0xb1, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0xde, 0xed, 0x62, 0x28, 0x42, 0x31, 0x94, 0x59, 0xce, 0x1c, 0xdf, 0x1c, 0xe7, 0xdb, 0xde, 0x1c, 0xdf, 0x5d, 0xe7, 0xec, 0x6a, 0x87, 0x39, 0x9f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9a, 0xce, 0xeb, 0x52, 0x46, 0x31, 0x6d, 0x73, 0x58, 0xbe, 0x1c, 0xef, 0x1d, 0xe7, 0xee, 0x73, 0x44, 0x18, 0xdc, 0xd6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9b, 0xd6, 0xed, 0x5a, 0x05, 0x29, 0xeb, 0x5a, 0xef, 0x73, 0x44, 0x18, 0xb8, 0xc5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5d, 0xe7, 0xaf, 0x73, 0x83, 0x10, 0x37, 0xad, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0xdb, 0x29, 0x45, 0x39, 0xc7, 0x52, 0xa9, 0x73, 0xaf, 0xa5, 0x36, 0xde, 0x9d, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0xb5, 0x52, 0xeb, 0x63, 0x2c, 0x5b, 0x6d, 0x62, 0xed, 0x5a, 0x6a, 0x4a, 0xaa, 0x4a, 0x29, 0x5a, 0xed, 0xa4, 0xf4, 0xef, 0x5e, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7b, 0xf1, 0x5a, 0x6a, 0x21, 0x04, 0x21, 0x04, 0x31, 0x45, 0x4a, 0x28, 0x52, 0xeb, 0x6b, 0xad, 0x6b, 0x6c, 0x62, 0xeb, 0x4a, 0x29, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xff, 0x6c, 0x32, 0x5a, 0xa9, 0x31, 0x86, 0x31, 0x87, 0x29, 0xc6, 0x21, 0x86, 0x31, 0x87, 0x29, 0x46, 0x21, 0x45, 0x7b, 0xf1, 0x5a, 0xec, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0x5f, 0x7b, 0x6f, 0x4a, 0xe9, 0x29, 0x87, 0x39, 0x87, 0x41, 0xc8, 0x39, 0xc7, 0x39, 0xc7, 0x39, 0xc6, 0x41, 0xc7, 0x74, 0x2f, 0x74, 0x31, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x1d, 0x63, 0xae, 0x52, 0x28, 0x31, 0xc8, 0x3a, 0x27, 0x39, 0xc8, 0x39, 0xc7, 0x3a, 0x28, 0x39, 0xc7, 0x52, 0xaa, 0x63, 0x6e, 0xad, 0x36, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0xdc, 0x63, 0x6e, 0x52, 0x69, 0x31, 0x87, 0x39, 0xc7, 0x39, 0xc8, 0x42, 0x28, 0x4a, 0x29, 0x39, 0xc8, 0x6b, 0x6d, 0x72, 0xec, 0xd5, 0xfa, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbd, 0xb9, 0x8c, 0x33, 0xcd, 0xf9, 0xce, 0xdb, 0xad, 0x76, 0x73, 0xae, 0x52, 0xaa, 0x3a, 0x28, 0x39, 0xc7, 0x31, 0xc8, 0x8b, 0xef, 0x5b, 0x2b, 0xef, 0x9e, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdf, 0x1d, 0x63, 0xae, 0xa4, 0xb3, 0xa4, 0xf3, 0x5b, 0x6d, 0x73, 0x6e, 0xa4, 0xf4, 0xc6, 0x59, 0xde, 0x9a, 0xbd, 0xb7, 0x8c, 0x32, 0x63, 0x6d, 0x73, 0xad, 0x8b, 0xb1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xad, 0xb8, 0x6b, 0x6e, 0xce, 0xda, 0xef, 0x9e, 0x94, 0x73, 0x63, 0x2c, 0x52, 0xeb, 0x52, 0xeb, 0x5a, 0xeb, 0x6b, 0x6d, 0xa4, 0xf3, 0xcd, 0xf9, 0xe6, 0xdd, 0x62, 0xed, 0xbd, 0xb9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x52, 0x68, 0xf7, 0x9e, 0xff, 0xdf, 0xe7, 0x1c, 0xde, 0x9a, 0xc5, 0xf9, 0xa4, 0xf4, 0x73, 0xae, 0x62, 0xec, 0x4a, 0xea, 0x52, 0x68, 0xac, 0xb5, 0xbd, 0xf9, 0x52, 0xaa, 0xff, 0xdf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x94, 0x74, 0x52, 0xaa, 0xa4, 0xf3, 0xdf, 0x1d, 0xc5, 0xf9, 0xc5, 0xf8, 0xc5, 0xf8, 0xd6, 0xdb, 0xce, 0x9a, 0x9c, 0xb3, 0xa5, 0x36, 0xe7, 0x5d, 0x52, 0x6a, 0x73, 0xb1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xde, 0x9c, 0x62, 0xed, 0x42, 0x28, 0x94, 0x31, 0xce, 0x59, 0xdf, 0x1c, 0xe7, 0x1c, 0xde, 0xdb, 0xdf, 0x1c, 0xe7, 0x5d, 0x6a, 0xec, 0x39, 0x87, 0xff, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x9a, 0x52, 0xeb, 0x31, 0x46, 0x73, 0x6d, 0xbe, 0x58, 0xef, 0x1c, 0xe7, 0x1d, 0x73, 0xee, 0x18, 0x44, 0xd6, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd6, 0x9b, 0x5a, 0xed, 0x29, 0x05, 0x5a, 0xeb, 0x73, 0xef, 0x18, 0x44, 0xc5, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x5d, 0x73, 0xaf, 0x10, 0x83, 0xad, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xd6, 0xd6, 0xc6, 0xff, 0x29, 0x29, 0x29, 0xff, 0x39, 0x39, 0x39, 0xff, 0x4a, 0x52, 0x52, 0xff, 0x7b, 0x73, 0x73, 0xff, 0xad, 0xa5, 0x9c, 0xff, 0xe7, 0xce, 0xd6, 0xff, 0xff, 0xff, 0xf7, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xa5, 0x94, 0x94, 0xff, 0x5a, 0x5a, 0x52, 0xff, 0x63, 0x63, 0x63, 0xff, 0x6b, 0x6b, 0x5a, 0xff, 0x6b, 0x5a, 0x63, 0xff, 0x52, 0x4a, 0x5a, 0xff, 0x52, 0x52, 0x4a, 0xff, 0x4a, 0x42, 0x4a, 0xff, 0x6b, 0x5a, 0x5a, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xef, 0xe7, 0xe7, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x84, 0x7b, 0x7b, 0xff, 0x52, 0x4a, 0x5a, 0xff, 0x21, 0x21, 0x21, 0xff, 0x21, 0x21, 0x21, 0xff, 0x29, 0x29, 0x31, 0xff, 0x42, 0x42, 0x4a, 0xff, 0x5a, 0x5a, 0x52, 0xff, 0x6b, 0x73, 0x6b, 0xff, 0x63, 0x6b, 0x6b, 0xff, 0x5a, 0x5a, 0x63, 0xff, 0x4a, 0x42, 0x4a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xef, 0xff, 0x8c, 0x84, 0x6b, 0xff, 0x4a, 0x52, 0x5a, 0xff, 0x31, 0x31, 0x31, 0xff, 0x39, 0x31, 0x31, 0xff, 0x31, 0x39, 0x29, 0xff, 0x31, 0x31, 0x21, 0xff, 0x39, 0x31, 0x31, 0xff, 0x31, 0x29, 0x29, 0xff, 0x29, 0x29, 0x21, 0xff, 0x84, 0x7b, 0x7b, 0xff, 0x63, 0x5a, 0x5a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xf7, 0xe7, 0xef, 0xff, 0x7b, 0x6b, 0x7b, 0xff, 0x4a, 0x5a, 0x4a, 0xff, 0x39, 0x31, 0x29, 0xff, 0x39, 0x31, 0x39, 0xff, 0x42, 0x39, 0x42, 0xff, 0x39, 0x39, 0x39, 0xff, 0x39, 0x39, 0x39, 0xff, 0x31, 0x39, 0x39, 0xff, 0x39, 0x39, 0x42, 0xff, 0x7b, 0x84, 0x73, 0xff, 0x84, 0x84, 0x73, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xe7, 0xde, 0xde, 0xff, 0x73, 0x73, 0x63, 0xff, 0x42, 0x42, 0x52, 0xff, 0x42, 0x39, 0x31, 0xff, 0x39, 0x42, 0x39, 0xff, 0x42, 0x39, 0x39, 0xff, 0x39, 0x39, 0x39, 0xff, 0x42, 0x42, 0x39, 0xff, 0x39, 0x39, 0x39, 0xff, 0x52, 0x52, 0x52, 0xff, 0x73, 0x6b, 0x63, 0xff, 0xad, 0xa5, 0xa5, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xde, 0xd6, 0xc6, 0xff, 0x73, 0x6b, 0x63, 0xff, 0x4a, 0x4a, 0x52, 0xff, 0x39, 0x31, 0x31, 0xff, 0x39, 0x39, 0x39, 0xff, 0x42, 0x39, 0x39, 0xff, 0x42, 0x42, 0x42, 0xff, 0x4a, 0x42, 0x4a, 0xff, 0x42, 0x39, 0x39, 0xff, 0x6b, 0x6b, 0x6b, 0xff, 0x63, 0x5a, 0x73, 0xff, 0xce, 0xbd, 0xce, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xc6, 0xb5, 0xb5, 0xff, 0x94, 0x84, 0x84, 0xff, 0xc6, 0xbd, 0xc6, 0xff, 0xd6, 0xd6, 0xc6, 0xff, 0xad, 0xad, 0xa5, 0xff, 0x73, 0x73, 0x73, 0xff, 0x52, 0x52, 0x52, 0xff, 0x42, 0x42, 0x39, 0xff, 0x39, 0x39, 0x39, 0xff, 0x42, 0x39, 0x31, 0xff, 0x7b, 0x7b, 0x84, 0xff, 0x5a, 0x63, 0x5a, 0xff, 0xef, 0xef, 0xe7, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xe7, 0xde, 0xd6, 0xff, 0x73, 0x73, 0x63, 0xff, 0x94, 0x94, 0x9c, 0xff, 0x94, 0x9c, 0x9c, 0xff, 0x6b, 0x6b, 0x5a, 0xff, 0x73, 0x6b, 0x73, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xc6, 0xc6, 0xbd, 0xff, 0xce, 0xce, 0xd6, 0xff, 0xb5, 0xb5, 0xb5, 0xff, 0x8c, 0x84, 0x84, 0xff, 0x6b, 0x6b, 0x63, 0xff, 0x6b, 0x73, 0x73, 0xff, 0x84, 0x73, 0x84, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xbd, 0xb5, 0xa5, 0xff, 0x73, 0x6b, 0x6b, 0xff, 0xce, 0xd6, 0xc6, 0xff, 0xef, 0xef, 0xe7, 0xff, 0x94, 0x8c, 0x8c, 0xff, 0x63, 0x63, 0x63, 0xff, 0x5a, 0x5a, 0x52, 0xff, 0x5a, 0x5a, 0x52, 0xff, 0x5a, 0x5a, 0x5a, 0xff, 0x6b, 0x6b, 0x6b, 0xff, 0x94, 0x9c, 0x9c, 0xff, 0xc6, 0xbd, 0xc6, 0xff, 0xe7, 0xd6, 0xde, 0xff, 0x6b, 0x5a, 0x63, 0xff, 0xc6, 0xb5, 0xb5, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x42, 0x4a, 0x52, 0xff, 0xef, 0xef, 0xef, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xde, 0xde, 0xde, 0xff, 0xce, 0xce, 0xd6, 0xff, 0xc6, 0xbd, 0xbd, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x73, 0x73, 0x73, 0xff, 0x63, 0x5a, 0x63, 0xff, 0x52, 0x5a, 0x4a, 0xff, 0x42, 0x4a, 0x52, 0xff, 0xa5, 0x94, 0xa5, 0xff, 0xc6, 0xbd, 0xb5, 0xff, 0x52, 0x52, 0x52, 0xff, 0xf7, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x9c, 0x8c, 0x8c, 0xff, 0x52, 0x52, 0x52, 0xff, 0x94, 0x9c, 0x9c, 0xff, 0xe7, 0xde, 0xd6, 0xff, 0xc6, 0xbd, 0xbd, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xd6, 0xd6, 0xce, 0xff, 0xce, 0xce, 0xc6, 0xff, 0x94, 0x94, 0x94, 0xff, 0xad, 0xa5, 0x9c, 0xff, 0xe7, 0xe7, 0xde, 0xff, 0x52, 0x4a, 0x52, 0xff, 0x84, 0x73, 0x73, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xde, 0xce, 0xd6, 0xff, 0x6b, 0x5a, 0x63, 0xff, 0x42, 0x42, 0x42, 0xff, 0x84, 0x84, 0x8c, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xde, 0xde, 0xd6, 0xff, 0xde, 0xde, 0xde, 0xff, 0xd6, 0xd6, 0xd6, 0xff, 0xde, 0xde, 0xd6, 0xff, 0xe7, 0xe7, 0xde, 0xff, 0x63, 0x5a, 0x6b, 0xff, 0x39, 0x31, 0x39, 0xff, 0xff, 0xef, 0xf7, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xce, 0xce, 0xc6, 0xff, 0x5a, 0x5a, 0x52, 0xff, 0x31, 0x29, 0x31, 0xff, 0x6b, 0x6b, 0x73, 0xff, 0xbd, 0xc6, 0xb5, 0xff, 0xde, 0xde, 0xe7, 0xff, 0xe7, 0xde, 0xde, 0xff, 0x73, 0x7b, 0x73, 0xff, 0x21, 0x08, 0x18, 0xff, 0xde, 0xd6, 0xce, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xd6, 0xce, 0xce, 0xff, 0x6b, 0x5a, 0x5a, 0xff, 0x29, 0x21, 0x29, 0xff, 0x5a, 0x5a, 0x5a, 0xff, 0x7b, 0x7b, 0x73, 0xff, 0x21, 0x08, 0x18, 0xff, 0xbd, 0xb5, 0xbd, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xe7, 0xe7, 0xde, 0xff, 0x7b, 0x73, 0x73, 0xff, 0x18, 0x10, 0x10, 0xff, 0xb5, 0xa5, 0xa5, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};
