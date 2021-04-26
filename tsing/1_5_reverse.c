//
// Created by mc on 21-4-26.
// 01-E-5: 数组倒置
//
#if(0)


#include <stdio.h>

void reverse(int *pA, int lo, int hi);

void swap(int *pInt, int lo, int hi);

void traverse(int *);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};


    int lo = 0;

    reverse(&arr, lo, sizeof(arr) / sizeof(int) - 1);


    traverse(&arr);

    return 0;
}


/*
 * 迭代实现
void reverse(int *pA, int lo, int hi) {
    while (lo < hi) {
        swap(pA, lo, hi);
        lo++;
        hi--;
    }
}*/


//递归实现
void reverse(int *pA, int lo, int hi) {
    if (lo < hi) {
        swap(pA, lo, hi);
        reverse(pA,lo+1,hi-1);
    }
}

void swap(int *pInt, int lo, int hi) {
    int temp = *(pInt + lo);
    *(pInt + lo) = *(pInt + hi);
    *(pInt + hi) = temp;
}


void traverse(int *pA) {
    int i = 0;
    while (i < 7) {
        printf(" %d ", *(pA + i));
        i++;
    }
}

#endif