#include "sd.h"
Sd sd = Sd();

void setup() {
  Serial.begin(9600);
  sd.setupSd();
  SdFile::dateTimeCallback( &dateTime );
}

void loop() {
  int t = millis();
  String mill = (String) t;
  sd.printSd(mill);
  delay(1000); // run every 10 minutes
}





void dateTime(uint16_t* date, uint16_t* time)
{
  uint16_t year = 2018;
  uint8_t month = 5, day = 17, hour = 9, minute = 0, second = 0;

  // GPSやRTCから日付と時間を取得
  // FAT_DATEマクロでフィールドを埋めて日付を返す
  *date = FAT_DATE(year, month, day);

  // FAT_TIMEマクロでフィールドを埋めて時間を返す
  *time = FAT_TIME(hour, minute, second);
}
