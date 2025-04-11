#include <Arduino.h>

String mozi = "Hello World";

void setup(){
  Serial.begin(115200);
}

void loop() {
  Serial.println(mozi);
}