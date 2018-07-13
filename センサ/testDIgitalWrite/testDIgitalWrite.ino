#include <stdio.h>
#include <string.h>
#include "Arduino.h"

void setup() {
  // put your setup code here, to run once:
pinMode(44,OUTPUT);
pinMode(46,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
digitalWrite(44,LOW);
digitalWrite(46,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(44, 0);
analogWrite(46, 255);
analogWrite(10, 255);
analogWrite(9, 0);

//analogWrite(44, 122.5);
//analogWrite(46, 0);
//analogWrite(10, 0);
//analogWrite(9, 122.5);

}
