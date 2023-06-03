#include "Adafruit_LEDBackpack.h"

Adafruit_7segment led_display1 = Adafruit_7segment();

void setup()
{
  led_display1.begin(112);
  pinMode(A1, INPUT);
}

void loop()
{
  led_display1.println((analogRead(A1) * 0.9757004));
  led_display1.writeDisplay();
  delay(100); 
}