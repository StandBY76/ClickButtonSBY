// ESP32 Touch Calibration

#define touch_pin 13  // 13 for Heltec, 13 for LoLin

int minimum = 255;
int maximum = 0;

int touchValue;

void setup() {
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Calibration");

  Serial.print("touchValue");       // Start serial plotter
  Serial.print("\t");
  Serial.print("minimum");
  Serial.print("\t");
  Serial.println("maximum");

}

void loop() {
  touchValue = touchRead(touch_pin);
  if (touchValue > maximum) maximum = touchValue;
  if (touchValue < minimum) minimum = touchValue;
  
  Serial.print(touchValue);       // Start serial plotter
  Serial.print("\t");
  Serial.print(minimum);
  Serial.print("\t");
  Serial.println(maximum);
  delay(10);
}
