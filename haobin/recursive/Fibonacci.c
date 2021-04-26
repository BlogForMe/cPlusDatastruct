//
// Created by mc on 4/23/21.
//



#if(0)

#include <stdio.h>
#include <stdbool.h>

int  f(int n){
    if(n==0){
        return 0;
    } else if(n==1){
        return  1;
    } else{
        return f(n-1)+f(n-2);
    }
}


int main(){
    int n;
    printf("输入n的值为 ");
    while (true){
        scanf("%d",&n);
        printf("f(n) %d \n",f(n));
    }
}

#endif