//
// Created by mc on 4/18/21.
//
# include<stdio.h>




#if(0)

void f(int *i){
    *i = 100;
}

int main(void){
    int i = 9;
    f(&i);
    printf("i = %d\n",i);
    return 0;
}
#endif