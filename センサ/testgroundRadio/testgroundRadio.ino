#include <SoftwareSerial.h>
#include <XBee.h>
#include "Arduino.h"
#include <stdio.h>
#include <string.h>
#define XBee_pin_Rx 10
#define XBee_pin_Tx 11

XBee xbee = XBee();
XBeeResponse response = XBeeResponse();
ZBRxResponse rx = ZBRxResponse();
SoftwareSerial XBeeSerial(XBee_pin_Rx, XBee_pin_Tx);

String receiveString;
String stringData;
int intData;
int Data;

void setup() {
  Serial.begin(9600);
  XBeeSerial.begin(9600);
  xbee.setSerial(XBeeSerial);
}

void loop() {

  xbee.readPacket();

  if (xbee.getResponse().isAvailable()) {
    if (xbee.getResponse().getApiId() == ZB_EXPLICIT_RX_RESPONSE) {
      xbee.getResponse().getZBRxResponse(rx);

      if (xbee.getResponse().getFrameData()[4] == 0x41 && xbee.getResponse().getFrameData()[5] == 0x55) {
        String receiveData = "CanSat: ";

        for (int i = 0; i < rx.getDataLength(); i++) {
          receiveString = String(rx.getData()[i], DEC);
          intData = receiveString.toInt();

          if (intData <= 57 && intData >= 48) {
            Data = intData - 48;
            receiveData += String(Data);
          }
          else if (intData == 44) {
            stringData = ',';
            receiveData += stringData;
          }
          else if (intData == 32) {
            stringData = ' ';
            receiveData += stringData;
          }
          else if (intData == 46) {
            stringData = '.';
            receiveData += stringData;
          }
          else if (intData == 45) {
            stringData = '-';
            receiveData += stringData;
          }
        }
        Serial.println(receiveData);
      }
    }
  }
}
