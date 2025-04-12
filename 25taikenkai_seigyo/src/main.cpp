#include <Arduino.h>

int number = 1; 

void setup(){
  //なにか（空欄でもいい）

}

String mozi = "こんにちわ";

void loop(){
  Serial.println("mozi : " + String(number));
  number = number + 1;
  delay(500);

}







