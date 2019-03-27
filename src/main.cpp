#include <Arduino.h>
#include <U8x8lib.h>

#define OLED_SCL 15   // GPIO 15
#define OLED_SDA  4   // GPIO  4
#define OLED_RST 16   // GPIO 16

// define the display type that we use
U8X8_SSD1306_128X64_NONAME_SW_I2C u8x8(/* clock=*/ OLED_SCL, /* data=*/ OLED_SDA, /* reset=*/ OLED_RST);

void setup() {
    // set up the display
    u8x8.begin();
    u8x8.setPowerSave(0);
}

void loop() {
    // Yay... a "Hello World!"
    u8x8.setFont(u8x8_font_chroma48medium8_r);
    u8x8.drawString(0,0,"Hello World!");
    delay(2000);
}
