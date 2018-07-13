#include "gps.h"
Gps gps = Gps();

void setup() {
gps.setupGps();
Serial.begin(9600);
}

void loop() {
gps.readGps();
delay(1000);
}
