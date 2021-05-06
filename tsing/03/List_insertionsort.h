//
// Created by mc on 21-5-6.
//

#ifndef DATASTRUCT_LIST_INSERTIONSORT_H
#define DATASTRUCT_LIST_INSERTIONSORT_H

#include "List.h"
#include "listnode.h"
#include "list_remove.h"

//对列表中起始于位置p、宽度为n的区间做插入排序
template <typename  T> void List<T>::insertionSort(ListNodePosi<T> p, int n) {
    for (int r = 0; r < n; ++r) { //逐一为各节点
        insertA(search(p->data,r,p),p->data); //查找适当的位置并插入
        p = p->succ; remove(p->pred);   //转向下一节点
    }
}


#endif //DATASTRUCT_LIST_INSERTIONSORT_H
