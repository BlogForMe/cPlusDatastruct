//
// Created by john on 2021/4/19.
//

#include <stdio.h>

#if(0)
typedef struct Student {
    int sid;
    char name[100];
    char sex;
} * PSTU, STU; //等价于 ST代表了 struct Student st, PST 代表了struct Student *;

int main(void) {
    STU st; //等价于 struct Student st;
    PSTU  ps = &st; //struct Student * ps = &st;
    ps->sid = 99;
    printf("%d\n",ps->sid);
    return 0;
}

#endif