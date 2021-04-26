//
// Created by mc on 4/23/21.
//

#if(0)


#include <stdio.h>

void hannuota(int n, char a, char b, char c) {
    /**
     *      一个盘子 :
     *              直接将a柱子上的盘子从a移动到b
     *      否则 :
     *              先将a柱子上的n-1个盘子借助c移到b
     *              直接将a柱子上的盘中从a移到c
     *              最后将b柱子上的n-1个盘子借助a移到c
     */
    if (1 == n) {
        printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n", n, a, c);
    } else {
        hannuota(n - 1, a, c, b);
        printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n", n, a, c);
        hannuota(n - 1, b, a, c);
    }
}

int main(void) {
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';
    printf("请输入要移动盘子的个数:");
    int n;
    scanf("%d",&n);
    hannuota(n,'A','B','C');
    return 0;
}


#endif
