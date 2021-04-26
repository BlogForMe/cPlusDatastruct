//
// Created by mc on 21-4-26.
// 二分
//


#include <stdio.h>


int sum(int *pA, int lo, int hi);

int main() {
    int arr[] = {1, 2, 3, 4,5,6};
    int lo = 0;
    int hi = sizeof(arr) / sizeof(int) - 1;


    int sumTotal = sum(&arr, lo, hi);

    printf("sum= %d \n", sumTotal);

}

int sum(int *pA, int lo, int hi) {
    if (lo == hi) return *(pA + lo);
    int mi = (lo + hi)>>1;
    return  sum(pA,lo,mi) +sum(pA,mi+1,hi);
}
