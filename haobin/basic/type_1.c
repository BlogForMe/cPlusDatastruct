//
// Created by mc on 4/19/21.
//


#include <stdio.h>

#if(0)
typedef int ZHANGSAN;//为int再重新 多取一个名字，ZHANGSAN等价于int
typedef struct Student {
    int sid;
    char name[100];
    char sex;
} ST;


int main(void) {
    int i = 10; //等价于 ZHANGSAN i = 10;
    ZHANGSAN j = 20;
    printf("%d\n", j);

    struct Student st;//等价于 ST st;
    struct Student *ps = &st; // 等价于 ST * ps
    ST st2;
    st2.sid = 200;
    printf("%d\n",st2.sid);
}

#endif