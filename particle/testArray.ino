// This #include statement was automatically added by the Particle IDE.
#include "neopixel/neopixel.h"

Adafruit_NeoPixel strip = Adafruit_NeoPixel(256, D3, WS2812B);

void setup() {
    strip.begin();
    strip.setPixelColor(0, strip.Color(255,0,0));
    strip.show();
}

void loop() {

}