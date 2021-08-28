#include <Arduino.h>
#include <SoftwareSerial.h> // SoftwareSerial명령어 사용
#include <basic_move.h>
SoftwareSerial mySerial(2,3);

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
  mySerial.begin(9600);
  mySerial.println("Hello, World?");
  Serial.begin(9600);

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
  while(mySerial.available() > 0) 
  {
    
    char value = mySerial.read();
    if(value == 'F') //F인경우 전진
    {
      Serial.println("Moving Forward...");
      bm->forward();
    }

    else if(value == 'B') //B인경우 후진
    {
      Serial.println("Moving Backward...");
      bm->backward();
    }

    else if(value == 'R') //R인경우 우회전
    {
      Serial.println("Turning to Right...");
      bm->turn_R();
    }

    else if(value == 'L') //L인경우 좌회전
    {
      Serial.println("Turning to Left...");
      bm->turn_L();
    }

    else if(value == 'S') //S인경우 정지
    {
      Serial.println("Nooo STOP!");
      bm->stop();
    }
  }
  /*
 if(mySerial.available())
  {
     Serial.write(mySerial.read());
  }

 if(Serial.available())
  {
     mySerial.write(Serial.read());
  }
*/
}

