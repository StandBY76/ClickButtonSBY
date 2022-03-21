
//use serial plotter to see the changes in time

#include "ClickButton.h"

const int buttonPin1 = 14;
TouchButton button1(buttonPin1, 50);


void setup() {

  Serial.begin(115200);

}

void loop() {
  button1.Update();

  if (button1.changed) {
    String s = "Nr. of clicks: " + String(button1.clicks);
    Serial.println(s);
  }
  if (button1.isHold) {
    Serial.println("Holding time: " + String(button1.holdTime) + " [ms]");
  }

  delay(10);

}
