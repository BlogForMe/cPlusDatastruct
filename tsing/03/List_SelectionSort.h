//
// Created by mc on 21-5-6.
//

#ifndef DATASTRUCT_LIST_SELECTIONSORT_H
#define DATASTRUCT_LIST_SELECTIONSORT_H

#include "listnode.h"
#include "List.h"
#include "List_selectMax.h"

template<typename T>
//对列表中起始于位置p、宽度为n的区间做选择排序
void List<T>::selectionSort(ListNodePosi<T> p, int n) {
    ListNodePosi<T> head = p->pred, tail = p;
    for (int i = 0; i < n; ++i) tail = tail->succ; //待排序区间为(head, tail)
    while (n > 1) { //在至少还剩两个节点之前，在待排序区间内
        ListNodePosi<T> max = selectMax(head->succ, n); //找出最大者（歧义时后者优先）
        insertB(tail, remove(max)); //将其移至无序区间末尾（作为有序区间新的首元素）
        tail=tail->pred;n--;
    }
}


#endif //DATASTRUCT_LIST_SELECTIONSORT_H
