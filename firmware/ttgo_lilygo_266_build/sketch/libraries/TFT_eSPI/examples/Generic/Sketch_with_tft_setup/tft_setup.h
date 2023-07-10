#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/TFT_eSPI/examples/Generic/Sketch_with_tft_setup/tft_setup.h"
// This is a configuration setup file example for an RP2040 processor
// Adapt as required for your own hardware configuration

#define RP2040_PIO_SPI

#define GC9A01_DRIVER

#define TFT_WIDTH 240
#define TFT_HEIGHT 240

#define TFT_MOSI  10
#define TFT_MISO  9
#define TFT_SCLK  8
#define TFT_CS   7  // Chip select control pin
#define TFT_DC   4  // Data Command control pin
#define TFT_RST  5  // Reset pin (could connect to Arduino RESET pin)

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:-.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT

#define SPI_FREQUENCY  66000000

#define SPI_READ_FREQUENCY  20000000

#define SPI_TOUCH_FREQUENCY  2500000
