
#include <Wire.h>
#include <FaBoOLED_EROLED096.h>

FaBoOLED_EROLED096 faboOled;

void setup() {
  Serial.begin(9600);
  Serial.println("RESET");
  Serial.println();

  faboOled.begin();
  faboOled.showBitmap();
  delay(1000);
  faboOled.clear();
  faboOled.print("Hello! FaBo");
}

void loop() {
  faboOled.setCursor(0, 1);
  faboOled.print(millis() / 1000);
}

