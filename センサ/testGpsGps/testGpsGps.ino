#include <stdio.h>
#include <string.h>
#include "Arduino.h"
#include <HardwareSerial.h>
#include <TinyGPS++.h>

HardwareSerial SerialGps = Serial1;
TinyGPSPlus tinygps;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
SerialGps.begin(9600);
Serial.println("GPS is OK");
}

void loop() {
  // put your main code here, to run repeatedly:
if (SerialGps.available()) {
    char c = SerialGps.read();
    tinygps.encode(c);

    if (tinygps.location.isValid()) {
     float lon = tinygps.location.lng();
     float lat = tinygps.location.lat();
    }

 if (tinygps.date.isValid()) {
     short year = tinygps.date.year();
     short month = tinygps.date.month();
     short day = tinygps.date.day();
 }
 
    if (tinygps.time.isValid()) {
    short  hour = tinygps.time.hour();
     short minute = tinygps.time.minute();
     short second = tinygps.time.second();
    }

    if (tinygps.speed.isValid()) {
     float baudrate = tinygps.speed.mps();
    }

    if (tinygps.course.isValid()) {
     float deg = tinygps.course.deg();
    }
   float alt = tinygps.altitude.meters();
   
   String gpsDate = String(float lat) + ", "
              + String(float alt) + "，"
              + String(float baudrate) + "，"
              + String(float deg) + "，"
              + String(float alt);
    Serial.println( String gpsDate);
  }
  else {
  Serial.println("No GPS data received: check wiring");
}
}
