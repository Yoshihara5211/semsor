#include "acc.h"
Acc acc =Acc(A0,A1,A2);

void setup() {
Serial.begin(9600);
Serial.println("加速度センサ＿アナログ");
delay(3000);
Serial.println("Calibration_start");
acc.setupAcc();
Serial.println("finish");
Serial.print("calX=");
Serial.print(acc.xcal);
Serial.print(", calY=");
Serial.print(acc.ycal);
Serial.print(", calZ=");
Serial.println(acc.zcal);
}

void loop() {
acc.readAcc();
Serial.print("X=");
Serial.print(acc.X);
Serial.print(", Y=");
Serial.print(acc.Y);
Serial.print(", Z=");
Serial.println(acc.Z);
}
