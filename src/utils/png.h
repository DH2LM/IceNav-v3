#include <math.h>

#include "utils/png_decoder/pngle.h"

#define LINE_BUF_SIZE 240 // pixel = 524, 16 = 406, 32 = 386, 64 = 375, 128 = 368, 240 = 367, no draw = 324 (51ms v 200ms)
int16_t px = 0, sx = 0;
int16_t py = 0, sy = 0;
uint8_t pc = 0;
uint16_t lbuf[LINE_BUF_SIZE];

int16_t png_dx = 0, png_dy = 0;

// Define corner position
void setPngPosition(int16_t x, int16_t y)
{
  png_dx = x;
  png_dy = y;
}

// Draw pixel - called by pngle
void pngle_on_draw(pngle_t *pngle, uint32_t x, uint32_t y, uint32_t w, uint32_t h, uint8_t rgba[4])
{
  uint16_t color = (rgba[0] << 8 & 0xf800) | (rgba[1] << 3 & 0x07e0) | (rgba[2] >> 3 & 0x001f);

#if !defined(USE_ADAFRUIT_GFX) && defined(USE_LINE_BUFFER)
  color = (color << 8) | (color >> 8);
#endif

  if (rgba[3] > 127)
  { // Transparency threshold (no blending yet...)

#ifdef USE_LINE_BUFFER // This must handle skipped pixels in transparent PNGs
    if (pc >= LINE_BUF_SIZE)
    {
      tft.startWrite();
      tft.setAddrWindow(png_dx + sx, png_dy + sy, LINE_BUF_SIZE, 1);
      tft.pushImage(png_dx + sx, png_dy + sy, LINE_BUF_SIZE, 1, lbuf);
      tft.endWrite();
      px = x;
      sx = x;
      sy = y;
      pc = 0;
    }

    if ((x == px) && (sy == y) && (pc < LINE_BUF_SIZE))
    {
      px++;
      lbuf[pc++] = color;
    }
    else
    {
      tft.startWrite();
      tft.setAddrWindow(png_dx + sx, png_dy + sy, LINE_BUF_SIZE, 1);
      tft.pushImage(png_dx + sx, png_dy + sy, pc, 1, lbuf);
      tft.endWrite();

      px = x;
      sx = x;
      sy = y;
      pc = 0;
      px++;
      lbuf[pc++] = color;
    }
#else
    tft.drawPixel(x, y, color);
#endif
  }
}

// Render from SPIFFS or SD
void load_file(fs::FS &fs, const char *path)
{
  fs::File file = fs.open(path);
  if (!file)
  {
    Serial.println("Failed to open file for reading");
    return;
  }

  pngle_t *pngle = pngle_new();
  pngle_set_draw_callback(pngle, pngle_on_draw);

  // Feed data to pngle
  uint8_t buf[1024];

  int remain = 0;
  int len;

  while ((len = file.read(buf + remain, sizeof(buf) - remain)) > 0)
  {
    int fed = pngle_feed(pngle, buf, remain + len);
    if (fed < 0)
    {
      Serial.printf("ERROR: %s\n", pngle_error(pngle));
      break;
    }

    remain = remain + len - fed;
    if (remain > 0)
      memmove(buf, buf + fed, remain);
  }
  pngle_destroy(pngle);
  file.close();
}