//
// Created by mc on 4/18/21.
//

#include <stdio.h>

void f(int **q);

#if(0)
int main(void){
    int i=9;
    int *p = &i;
    printf("%p \n",p);
//    f(&p);
//    printf("%p \n",p);
    return 0;
}

void f(int **q){
    *q=(int *)0xFFFFFFFF;
}


#endif

