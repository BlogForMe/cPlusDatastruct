//
// Created by mc on 4/18/21.
//

#if(0)
#include <stdio.h>
#include <malloc.h>

int main(void){


    int a[5] = {4,10,2,8,6};
    int len;
    printf("请输入你需要分配的数组的长度：len = ");
    scanf("%d",&len);

    /**
     * sizeof(int) *len 分配len个int字节的长度，len =5时，就是20个字节
     * malloc返回 指向 第一个字节的地址
     * int * 第一个字节的地址，代表Int类型地址， pArr等价于a， pArr+1代表第二个Int地址
     */
    int *pArr = (int *)malloc(sizeof(int) *len);
    *pArr = 5; //类似于 a[0] =4;
     pArr[1] = 10; //类似于a[1]=10;
//     printf("%d %d ",*pArr,pArr[1]);

    for (int i = 0; i <len ; ++i) {
        scanf("%d" , &pArr[i]);
    }
    for (int i = 0;  i<len ; ++i) {
        printf("%d\n " , *(pArr+i));
    }

    free(pArr); //把pArr所代表的动态分配的20个字节的内存释放,动态分配内存必须手动释放
    return 0;
}

#endif