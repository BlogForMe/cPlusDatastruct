//
// Created by mc on 4/18/21.
//


#include <stdio.h>

void showArray(int pInt[5], int i);

#if(0)
int main(void){
    int a[5] = {1,2,3,4,5};
    showArray(a,5);
//    printf("%d\n",a[2]);
}
#endif

void showArray(int *p, int len) {
    p[2] = -1;  //p[0] == *p
    for(int i=0;i<len;++i)
        printf("%d ",p[i]);

}

