/**
 * @file LGFX_CUSTOMBOARD.hpp
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  LOVYANGFX TFT driver for CUSTOMBOARD
 * @version 0.1.6
 * @date 2023-06-14
 */

#define LGFX_USE_V1


#define MISO_D 12
#define MOSI_D 13
#define SCK_D  14
#define LED_D  21
#define DC_D   2
#define RST_D  -1
#define BUSY_D -1
#define CS_D   15

#define CS_T   33
#define INT_T  36
#define MISO_T 39
#define MOSI_T 32
#define SCK_T  25

#include <LovyanGFX.hpp>

class LGFX : public lgfx::LGFX_Device
{
    lgfx::Panel_ILI9341 _panel_instance;
    lgfx::Bus_SPI _bus_instance;
    lgfx::Light_PWM _light_instance;
    lgfx::Touch_XPT2046 _touch_instance;

public:
    LGFX(void)
    {
        {
            auto cfg = _bus_instance.config();
            cfg.spi_host = HSPI_HOST;
            cfg.spi_mode = 0;
            cfg.freq_write = 79999999;
            cfg.freq_read = 16000000;
            cfg.spi_3wire = true;
            cfg.use_lock = false;
            cfg.dma_channel = SPI_DMA_CH_AUTO;
            cfg.pin_sclk = SCK_D;
            cfg.pin_mosi = MOSI_D;
            cfg.pin_miso = MISO_D;
            cfg.pin_dc = DC_D;
            _bus_instance.config(cfg);
            _panel_instance.setBus(&_bus_instance);
        }

        {
            auto cfg = _panel_instance.config();
            cfg.pin_cs = CS_D;
            cfg.pin_rst = RST_D;
            cfg.pin_busy = BUSY_D;
            cfg.panel_width = TFT_WIDTH;
            cfg.panel_height = TFT_HEIGHT;
            cfg.memory_width = 320;
            cfg.memory_height = 240;
            cfg.offset_x = 0;
            cfg.offset_y = 0;
            cfg.offset_rotation = 4;
            cfg.dummy_read_pixel = 8;
            cfg.dummy_read_bits = 1;
            cfg.readable = true;
            cfg.invert = false;
            cfg.rgb_order = true;
            cfg.dlen_16bit = false;
            cfg.bus_shared = false;
            _panel_instance.config(cfg);
        }

        {
            auto cfg = _light_instance.config();
            cfg.pin_bl = LED_D;
            cfg.invert = false;
            cfg.freq = 44100;
            cfg.pwm_channel = 7;
            _light_instance.config(cfg);
            _panel_instance.setLight(&_light_instance);
        }

        {
            auto cfg = _touch_instance.config();
            cfg.x_min = 0;
            cfg.x_max = TFT_HEIGHT - 1;
            cfg.y_min = 0;
            cfg.y_max = TFT_WIDTH - 1;
            cfg.pin_int = INT_T;
            cfg.bus_shared = true;
            cfg.offset_rotation = 4;
            cfg.spi_host = VSPI_HOST;
            cfg.freq = 1600000;
            cfg.pin_sclk = SCK_T;
            cfg.pin_mosi = MOSI_T;
            cfg.pin_miso = MISO_T;
            cfg.pin_cs = CS_T;
            _touch_instance.config(cfg);
            _panel_instance.setTouch(&_touch_instance);
        }
        setPanel(&_panel_instance);
    }
};
