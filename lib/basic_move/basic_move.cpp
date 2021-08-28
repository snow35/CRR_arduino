#include "Arduino.h"
#include "basic_move.h"

#define ENA 10
#define ENB 9
#define ENA1 8
#define ENA2 13
#define ENB1 12
#define ENB2 11

int motor_speed = 200;

void basic_move::forward() //전진
{
  digitalWrite(ENA1, HIGH);
  digitalWrite(ENA2, LOW);
  analogWrite(ENA, motor_speed);
  digitalWrite(ENB1, HIGH);
  digitalWrite(ENB2, LOW);
  analogWrite(ENB, motor_speed);
}

void basic_move::backward() //후진
{
  digitalWrite(ENA1, LOW);
  digitalWrite(ENA2, HIGH);
  analogWrite(ENA, motor_speed);
  digitalWrite(ENB1, LOW);
  digitalWrite(ENB2, HIGH);
  analogWrite(ENB, motor_speed);
}

void basic_move::turn_L() //좌회전
{
  digitalWrite(ENA1, LOW);
  digitalWrite(ENA2, HIGH);
  analogWrite(ENA, motor_speed);
  digitalWrite(ENB1, HIGH);
  digitalWrite(ENB2, LOW);
  analogWrite(ENB, motor_speed);
}

void basic_move::turn_R() //우회전
{
  digitalWrite(ENA1, HIGH);
  digitalWrite(ENA2, LOW);
  analogWrite(ENA, motor_speed);
  digitalWrite(ENB1, LOW);
  digitalWrite(ENB2, HIGH);
  analogWrite(ENB, motor_speed);
}

void basic_move::stop() //우회전
{
  digitalWrite(ENA1, LOW);
  digitalWrite(ENA2, LOW);
  digitalWrite(ENB1, LOW);
  digitalWrite(ENB2, LOW);
}

void test_move::test_R_F() //오른쪽모터 전진 테스트
{
  digitalWrite(ENA1, HIGH);
  digitalWrite(ENA2, LOW);
  analogWrite(ENA, motor_speed);
}


void test_move::test_R_B() //오른쪽모터 후진 테스트
{
  digitalWrite(ENA1, LOW);
  digitalWrite(ENA2, HIGH);
  analogWrite(ENA, motor_speed);
}

void test_move::test_L_F() //왼쪽모터 전진 테스트
{
  digitalWrite(ENB1, HIGH);
  digitalWrite(ENB2, LOW);
  analogWrite(ENB, motor_speed);
}

void test_move::test_L_B() //왼쪽모터 후진 테스트
{
  digitalWrite(ENB1, LOW);
  digitalWrite(ENB2, HIGH);
  analogWrite(ENB, motor_speed);
}