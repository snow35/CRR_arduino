#include <Arduino.h>
#include <SoftwareSerial.h> // SoftwareSerial명령어 사용
#include <basic_move.h>
SoftwareSerial mySerial(5,6);

#define ENA 10
#define ENB 9
#define ENA1 8
#define ENA2 13
#define ENB1 12
#define ENB2 11

basic_move *bm;
test_move *tm;

void setup()
{
  //블루투스 설정 
  Serial.begin(9600);
  while (!Serial) {
    ;
  }

  mySerial.begin(38400);
  mySerial.println("Hello, World?");
  
    //모터설정
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(ENA1, OUTPUT);
  pinMode(ENA2, OUTPUT);
  pinMode(ENB1, OUTPUT);
  pinMode(ENB2, OUTPUT);
}



void loop() 
{
  if (Serial.available()){
    Serial.write(mySerial.read());
  }
  if (Serial.available()){
    mySerial.write(Serial.read());
  }

/*
  bm->backward();
  delay(3000);
*/
}

