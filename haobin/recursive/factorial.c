//
// Created by mc on 4/23/21.
// n的阶乘 4! = 4*3*2*1 , 3! = 3*2*1 , 2! = 2*1
//
//


#if(0)

#include <stdio.h>

long f(int n);
long sum(int n);
int main(void) {
    printf("n=1 输出 %ld \n ", f(1));
    printf("n=2 输出 %ld \n ", f(2));
    printf("n=3 输出 %ld \n ", f(3));
    printf("n=4 输出 %ld \n ", f(4));
    printf("n=5 输出 %ld \n ", f(5));

    printf("n=100 相加 %ld \n ", sum(100));

    int val,mult = 1;
    printf("请输入一个数: val=");
    scanf("%d",&val);
    for (int i = 1; i <= val; ++i) {
        mult = mult * i;
    }
    printf("%d的阶乘是: %d\n",val,mult);
}

//假定n的值是1或大于1的值
long f(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * f(n - 1);
    }
}

// 1+2+...+100
long sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return (n + sum(n-1));
    }
}

#endif