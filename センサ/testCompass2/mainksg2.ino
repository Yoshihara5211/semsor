#include <Wire.h>
#include "hmcksg.h"
#include <math.h>
#define HMC5883L_ADR 0x1E //7bit ADDRESS

Compass hmc;  // hmcオブジェクト生成
//hmc.I2C_READ 不要
void setup()
{
  Wire.begin();
  Serial.begin(9600);
  Serial.println("AE-HMC5883L DEMO");
  delay(10);
  //hmc.I2C_READ(0x02, 0x00);
   hmc.I2C_WRITE(0x02, 0x00);//Writeないと正しい値が出ません　値が更新されませんでした
  hmc.calibration();
  Serial.println("CAlifini");
  delay(1000);
}
int i=1;
void loop()
{
  
  hmc.readCompass();
  Serial.print("X=");
  Serial.print(hmc.X_DOUBLE);
  Serial.print(", Y=");
  Serial.print(hmc.Y_DOUBLE);
  Serial.print(",Z=");
  Serial.print(hmc.Z_DOUBLE);
//  Serial.print(",   RAD = ");
//  Serial.println(hmc.RAD_RESULT);
  Serial.print(",  Degree = ");
  Serial.println(hmc.deg);
//  Serial.print(",  16orientation = ");
//  if ((hmc.DEG_RESULT >  -11.25) && (hmc.DEG_RESULT <=   11.25))
//  {
//    Serial.println("N");
//  }
//  if ((hmc.DEG_RESULT >   11.25) && (hmc.DEG_RESULT <=   33.75))
//  {
//    Serial.println("NNE");
//  }
//  if ((hmc.DEG_RESULT >   33.75) && (hmc.DEG_RESULT <=   56.25))
//  {
//    Serial.println("NE");
//  }
//  if ((hmc.DEG_RESULT >   56.25) && (hmc.DEG_RESULT <=   78.75))
//  {
//    Serial.println("ENE");
//  }
//  if ((hmc.DEG_RESULT >   78.75) && (hmc.DEG_RESULT <=  101.25))
//  {
//    Serial.println("E");
//  }
//  if ((hmc.DEG_RESULT >  101.25) && (hmc.DEG_RESULT <=  123.75))
//  {
//    Serial.println("ESE");
//  }
//  if ((hmc.DEG_RESULT >  123.75) && (hmc.DEG_RESULT <=  146.25))
//  {
//    Serial.println("SE");
//  }
//  if ((hmc.DEG_RESULT >  146.25) && (hmc.DEG_RESULT <=  168.75))
//  {
//    Serial.println("SSE");
//  }
//  if ((hmc.DEG_RESULT >  168.75) || (hmc.DEG_RESULT <= -168.75))
//  {
//    Serial.println("S");
//  }
//  if ((hmc.DEG_RESULT > -168.75) && (hmc.DEG_RESULT <= -146.25))
//  {
//    Serial.println("SSW");
//  }
//  if ((hmc.DEG_RESULT > -146.25) && (hmc.DEG_RESULT <= -123.75))
//  {
//    Serial.println("SW");
//  }
//  if ((hmc.DEG_RESULT > -123.75) && (hmc.DEG_RESULT <= -101.25))
//  {
//    Serial.println("WSW");
//  }
//  if ((hmc.DEG_RESULT > -101.25) && (hmc.DEG_RESULT <=  -78.75))
//  {
//    Serial.println("W");
//  }
//  if ((hmc.DEG_RESULT >  -78.75) && (hmc.DEG_RESULT <=  -56.25))
//  {
//    Serial.println("WNW");
//  }
//  if ((hmc.DEG_RESULT >  -56.25) && (hmc.DEG_RESULT <=  -33.75))
//  {
//    Serial.println("NW");
//  }
//  if ((hmc.DEG_RESULT >  -33.75) && (hmc.DEG_RESULT <=  -11.25))
//  {
//    Serial.println("NNW");
//  }
//  i=i+1;
//  if(i==10){
//    Serial.println("10周したからCalibrationしよう");
//   // hmc.CALIBRATION();
//    i=1;
//    }
}
