//
// Created by mc on 4/19/21.
//

#if(0)

#include <stdbool.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//定义了一个数据类型
struct Arr {
    int *pBase; //存储的时数组第一个元素的地址,指向一个数组
    int len;    //数组所能容纳的最大元素的个数
    int cnt;    //当前数组有效元素的个数
};

bool append_arr(struct Arr *pArr, int val); //追加
bool insert_arr(struct Arr *pArr, int pos, int val);

bool delete_arr(struct Arr *pArr, int pos, int *pVal);

int get();

bool is_empty(struct Arr *pArr);

bool is_full(struct Arr *pArr);

void sort_arr(struct Arr *pArr);

void inversion_arr(struct Arr *pArr);

void init_arr(struct Arr *pArr, int length);

void show_arr(struct Arr *pArr);

int main() {

    struct Arr arr;
    int val;

    init_arr(&arr, 6);
    printf("%d\n", arr.len);

    append_arr(&arr, 2);
    append_arr(&arr, 4);
    append_arr(&arr, 3);
    append_arr(&arr, 1);
    append_arr(&arr, 5);
//    append_arr(&arr,6);
//    append_arr(&arr,7);
//    insert_arr(&arr,1,99);

//    if(delete_arr(&arr,1,&val)){
//        printf("删除成功!\n");
//        printf("您删除的元素是 %d!\n",val);
//    }

//    inversion_arr(&arr);
    show_arr(&arr);

    sort_arr(&arr);

    printf("倒置后的内容\n");
    show_arr(&arr);
    return 0;
}

void show_arr(struct Arr *pArr) {
    if (is_empty(pArr)) {
        printf("数组为空!\n");
    } else {
        for (int i = 0; i < pArr->cnt; ++i) {
            printf("%d ", pArr->pBase[i]);
        }
    }
}

bool is_empty(struct Arr *pArr) {
    if (0 == pArr->cnt)
        return true;
    else
        return false;
}

void init_arr(struct Arr *pArr, int length) {
    pArr->pBase = malloc(sizeof(int) * length);
    if (NULL == pArr->pBase) {
        printf("动态内存分配失败!\n");
        exit(-1);
    } else {
        pArr->len = length;
        pArr->cnt = 0;
    }
    return;
}

bool append_arr(struct Arr *pArr, int val) {
    if (is_full(pArr)) {
        return false;
    }
    pArr->pBase[pArr->cnt] = val;
    (pArr->cnt)++;
    return true;
}

bool is_full(struct Arr *pArr) {
    if (pArr->len == pArr->cnt) {
        printf("容量已满\n");
        return true;
    }
    return false;
}

bool insert_arr(struct Arr *pArr, int pos, int val) {

    if (is_full(pArr)) {
        return false;
    }

    if (pos < 1 || pos > pArr->len + 1)
        return false;

    for (int i = pArr->cnt - 1; i < pos - 1; ++i) {
        pArr->pBase[i + 1] = pArr->pBase[i];
    }
    pArr->pBase[pos - 1] = val;
    return true;
}

bool delete_arr(struct Arr *pArr, int pos, int *pVal) {
    if (is_empty(pArr))
        return false;
    if (pos < 1 || pos > pArr->cnt)
        return false;
    *pVal = pArr->pBase[pos - 1];
    for (int i = pos; i < pArr->cnt; ++i) {
        pArr->pBase[i - 1] = pArr->pBase[i];
    }
    pArr->cnt--;
    return true;
}

void inversion_arr(struct Arr *pArr) {
    int i = 0;
    int j = pArr->cnt - 1;
    int t;
    while (i < j) {
        t = pArr->pBase[i];
        pArr->pBase[i] = pArr->pBase[j];
        pArr->pBase[j] = t;
        ++i;
        --j;
    }
}

void sort_arr(struct Arr *pArr) {
    int i, j, t;
    for (int i = 0; i < pArr->cnt; ++i) {
        for (int j = i + 1; j < pArr->cnt; ++j) {
            if (pArr->pBase[i] > pArr->pBase[j]) {
                t = pArr->pBase[i];
                pArr->pBase[i] = pArr->pBase[j];
                pArr->pBase[j] = t;
            }
        }
    }
}

#endif