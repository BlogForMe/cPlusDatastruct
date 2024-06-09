//
// Created by m on 6/8/24.
//

#include <iostream>
#include "Log.h"

#define LOG(x)  std::cout << x << std::endl;

static int multiply(int a, int b) {
    Log("multiply");
    return a * b;
}

void increment(int *value) {
    (*value)++;
}


void increment(int &value) {
    value++;
}

class Player {
public:
    int x, y;
    int speed;

    void move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};

#if 0
int main() {

    Player player;
    player.x = 5;
    player.speed = 10;
    player.move(1, -1);
    LOG(player.x)


//    std::cout << multiply(5,8) <<std::endl;
//    short a = 'A';
//    std::cout << a<<std::endl;
//    initLog();

//    int a  = 5;
//    void* pStr = &a; // 拿到变量的指针，指针不需要类型

//    int* pStr =  &a;
//    *pStr = 10 ;//如果给指针指向对象赋值，就需要类型
//    LOG(a)

//    increment(a);
//    LOG(a)


//    int a = 5;
//    int b = 8;
//    int & ref = a;
//    ref = b;
//    LOG(a)
//    LOG(b)

//    int *ref = &a;
//    *ref = 2;
//    ref = &b;
//    *ref = 1;
//    LOG(a)
//    LOG(b)
    //    int& ref =a;
//    ref = 2;
//    LOG()
}
#endif