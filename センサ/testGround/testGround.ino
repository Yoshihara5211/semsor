#include <stdio.h>
#include <string.h>
#include "Arduino.h"
#include <HardwareSerial.h>
int i = 0;
char buf[100];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial.println("millis, state, light, lat, lon, ax, ay, az, deg, micf_freq, micf_vol, micr_freq, micr_vol, micl_freq, micl_vol, micb_freq, micb_vol");
}

//void loop() {
//  // put your main code here, to run repeatedly:
//  String value = String(Serial1.read());
//Serial.println(String(Serial1.read()));
//delay(1000);
//}

//void loop() {
//  if (Serial1.available()) {
//    buf[i] = Serial1.read();
//    if (buf[i] == 'e') {
//      buf[i] = '\0';
//      String data = String(atoi(strtok(buf, ","))) + ", "
//                    + String(atoi(strtok(NULL, ","))) + ", "
//                    + String(atoi(strtok(NULL, ","))) + ", "
//                    + String(atoi(strtok(NULL, ","))) + ", "
//                    + String(atoi(strtok(NULL, ","))) + ", "
//                    + String(atoi(strtok(NULL, ","))) + ", "
//                    + String(atoi(strtok(NULL, ","))) + ", "
//                    + String(atoi(strtok(NULL, ","))) + ", "
//                    + String(atoi(strtok(NULL, ","))) + ", ";
//
//      Serial.println(data);
//      i = 0;
//    }
//    else {
//      i++;
//    }
//  }
//}

void loop() {
  if (Serial1.available()) {
    buf[i] = Serial1.read();
    if (buf[i] == 'e') {
      buf[i] = '\0';
      int v1 = atoi(strtok(buf, ","));
      int v2 = atoi(strtok(NULL, ","));
      int v3 = atoi(strtok(NULL, ","));
      int v4 = atoi(strtok(NULL, ","));
      int v5 = atoi(strtok(NULL, ","));
      int v6 = atoi(strtok(NULL, ","));
      int v7 = atoi(strtok(NULL, ","));
      int v8 = atoi(strtok(NULL, ","));
      int v9 = atoi(strtok(NULL, ","));
      int v10 = atoi(strtok(NULL, ","));
      int v11 = atoi(strtok(NULL, ","));
      int v12 = atoi(strtok(NULL, ","));
      int v13 = atoi(strtok(NULL, ","));
      int v14 = atoi(strtok(NULL, ","));
      int v15 = atoi(strtok(NULL, ","));
      int v16 = atoi(strtok(NULL, ","));
      int v17 = atoi(strtok(NULL, ","));
      Serial.print(v1);
      Serial.print(", ");
      Serial.print(v2);
      Serial.print(", ");
      Serial.print(v3);
      Serial.print(", ");
      Serial.print(v4);
      Serial.print(", ");
      Serial.print(v5);
      Serial.print(", ");
      Serial.print(v6);
      Serial.print(", ");
      Serial.print(v7);
      Serial.print(", ");
      Serial.print(v8);
      Serial.print(", ");
      Serial.print(v9);
      Serial.print(", ");
      Serial.print(v10);
      Serial.print(", ");
      Serial.print(v11);
      Serial.print(", ");
      Serial.print(v12);
      Serial.print(", ");
      Serial.print(v13);
      Serial.print(", ");
      Serial.print(v14);
      Serial.print(", ");
      Serial.print(v15);
      Serial.print(", ");
      Serial.print(v16);
      Serial.print(", ");
      Serial.print(v17);
      Serial.print(", ");
      Serial.print("\n");
      i = 0;
    }
    else {
      i++;
    }
  }
}
