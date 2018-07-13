#include "compass.h"
Compass compass;
void setup() {
  Serial.begin(9600);
  Serial.println("AE-HMC5883L DEMO");
  compass.setupCompass(0x02, 0x00);
   delay(3000);
}

void loop() {
  compass.readCompass();
  Serial.print("X=");
  Serial.print(compass.X_12);
  Serial.print(", Y=");
  Serial.print(compass.Y_12);
  Serial.print(",Z=");
  Serial.print(compass.Z_12);
  Serial.print(",   RAD = ");
  Serial.print(compass.RAD_RESULT);
  Serial.print(",  Degree = ");
  Serial.print(compass.DEG_RESULT);
  Serial.print(",  16orientation = ");
  if ((compass.DEG_RESULT >  -11.25) && (compass.DEG_RESULT <=   11.25))
  {
    Serial.println("N");
  }
  if ((compass.DEG_RESULT >   11.25) && (compass.DEG_RESULT <=   33.75))
  {
    Serial.println("NNE");
  }
  if ((compass.DEG_RESULT >   33.75) && (compass.DEG_RESULT <=   56.25))
  {
    Serial.println("NE");
  }
  if ((compass.DEG_RESULT >   56.25) && (compass.DEG_RESULT <=   78.75))
  {
    Serial.println("ENE");
  }
  if ((compass.DEG_RESULT >   78.75) && (compass.DEG_RESULT <=  101.25))
  {
    Serial.println("E");
  }
  if ((compass.DEG_RESULT >  101.25) && (compass.DEG_RESULT <=  123.75))
  {
    Serial.println("ESE");
  }
  if ((compass.DEG_RESULT >  123.75) && (compass.DEG_RESULT <=  146.25))
  {
    Serial.println("SE");
  }
  if ((compass.DEG_RESULT >  146.25) && (compass.DEG_RESULT <=  168.75))
  {
    Serial.println("SSE");
  }
  if ((compass.DEG_RESULT >  168.75) || (compass.DEG_RESULT <= -168.75))
  {
    Serial.println("S");
  }
  if ((compass.DEG_RESULT > -168.75) && (compass.DEG_RESULT <= -146.25))
  {
    Serial.println("SSW");
  }
  if ((compass.DEG_RESULT > -146.25) && (compass.DEG_RESULT <= -123.75))
  {
    Serial.println("SW");
  }
  if ((compass.DEG_RESULT > -123.75) && (compass.DEG_RESULT <= -101.25))
  {
    Serial.println("WSW");
  }
  if ((compass.DEG_RESULT > -101.25) && (compass.DEG_RESULT <=  -78.75))
  {
    Serial.println("W");
  }
  if ((compass.DEG_RESULT >  -78.75) && (compass.DEG_RESULT <=  -56.25))
  {
    Serial.println("WNW");
  }
  if ((compass.DEG_RESULT >  -56.25) && (compass.DEG_RESULT <=  -33.75))
  {
    Serial.println("NW");
  }
  if ((compass.DEG_RESULT >  -33.75) && (compass.DEG_RESULT <=  -11.25))
  {
    Serial.println("NNW");
  }
}
