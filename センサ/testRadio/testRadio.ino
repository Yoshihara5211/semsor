#include "radio.h"
Radio radio = Radio();

void setup() {
  radio.setupRadio();
  Serial.begin(9600);
}

void loop() {
radio.getData();

String xbee_data = String(millis()) + ", ";
Serial.println("Sending Data to Xbee...");
radio.sendData(xbee_data);

delay(1000);
}
