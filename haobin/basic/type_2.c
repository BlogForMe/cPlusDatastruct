//
// Created by john on 2021/4/19.
//


#include <stdio.h>

#if(0)
typedef struct Student {
    int sid;
    char name[100];
    char sex;
} * PST ; //PST等价于 struct Student * ,这样就是一个指针类型了

int main(void){
    struct  Student st;
    PST ps  = &st;
    ps->sid = 99;
    printf("%d\n",ps->sid);
    return 0;
}

#endif