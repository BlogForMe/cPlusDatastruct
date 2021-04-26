//
// Created by john on 2021/4/22.
//

#if(0)
#include <printf.h>
#include <stdio.h>

void f(int n) {
    if (n == 1)
        printf("哈哈");
    else
        f(n - 1);
}

int main(void) {
    f(3);
    return 0;
}

#endif