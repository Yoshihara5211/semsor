#include "radio.h"
Radio radio;

void setup() {
  Serial.begin(9600);
  radio.setupRadio();
  Serial.println("ok");
}

void loop() {
  String send_data = "yeah" ;
radio.sendData(send_data);
Serial.println(send_data);
}
