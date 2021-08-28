#ifndef basic_move_h
#define basic_move_h

#include "Arduino.h"

struct basic_move //기본동작
{
    void forward();
    void backward();
    void turn_R();
    void turn_L();
    void stop();
};

struct test_move //테스트 동작
{
    void test_R_F(); //오른쪽 모터 전진
    void test_R_B(); //오른쪽 모터 후진
    void test_L_F(); //왼쪽 모터 전진
    void test_L_B(); //왼쪽 모터 후진
};

#endif