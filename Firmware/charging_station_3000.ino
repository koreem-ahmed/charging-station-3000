
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

#define TFT_CS 29
#define TFT_DC 30
#define TFT_RESET 37

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,TFT_DC,TFT_RESET)

void setup() {
  tft.initR(INITR_BLACKTAB);
  tft.setrotation(1);
  tft.fillScreen(ST7735_BLACK);

  tft.SetCursor(20, 10);
  tft.setTextColor(ST7735_WHITE);
  tft.setTextSize(1);
  tft.print("Charging station 3000")
}

void loop() {
  tft.setCusrsor(15, 50);
  tft.SetTextColor(ST7735_RED, ST7735_BLACK)
  tft.setTextSize(2);
  delay(1000);

  tft.setCursor(15و 50)
  tft.setTextColor(ST7735_BLUE, ST7735_BLACK);
  tft.print("hellow world");
  delay(1000)
}