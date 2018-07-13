#include "motor.h"
#include "constant.h"
Motor leftMotor = Motor(LEFT_MOTOR_VREF_PIN, LEFT_MOTOR_IN1_PIN, LEFT_MOTOR_IN2_PIN);
Motor rightMotor = Motor(RIGHT_MOTOR_VREF_PIN, RIGHT_MOTOR_IN1_PIN, RIGHT_MOTOR_IN2_PIN);

void setup() {
Serial.begin(9600);
Serial.println("Ok");
}

int value;
void loop() {
if (Serial.available() > 0) { // 受信したデータが存在する
    value = Serial.parseInt(); // 受信データを読み込む
leftMotor.go(value);
rightMotor.go(value);
Serial.println(leftMotor.velocity);
Serial.println(rightMotor.velocity);
Serial.println(value);
}
}
