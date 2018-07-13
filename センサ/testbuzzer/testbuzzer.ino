#define BEAT 100   // 音の長さを指定
#define PINNO 13   // 圧電スピーカを接続したピン番号
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
tone(PINNO,262,BEAT) ;  // ド
     
     tone(PINNO,294,BEAT) ;  // レ
     
     tone(PINNO,330,BEAT) ;  // ミ
     
     tone(PINNO,349,BEAT) ;  // ファ
     
     tone(PINNO,392,BEAT) ;  // ソ
     
     tone(PINNO,440,BEAT) ;  // ラ
     delay(BEAT) ;
     tone(PINNO,494,BEAT) ;  // シ
     delay(BEAT) ;
     tone(PINNO,523,BEAT) ;  // ド
     delay(3000) ;           // ３秒後に繰り返す
}
