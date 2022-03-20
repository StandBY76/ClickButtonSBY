// ESP32 Touch Calibration

#define touch_pin 13  // 13 for Heltec, 13 for LoLin
#define touch_pin2 14  // 14 for Heltec, 14 for LoLin

void setup() {
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop() {
  Serial.print(touchRead(touch_pin));       // Start serial plotter 
  Serial.print("\t");
  Serial.println(touchRead(touch_pin2));
  delay(10);
}
