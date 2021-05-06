//
// Created by mc on 21-5-5.
//

#ifndef DATASTRUCT_LIST_SERACH_H
#define DATASTRUCT_LIST_SERACH_H

#include "listnode.h"
#include "List.h"

template<typename T> //在有序列表内节点p（可能是trailer）的n个（真）前驱中，找到不大于e的最后者
ListNodePosi<T> List<T>::search(const T &e, int n, ListNode<T> *p) const {
    while (0 <= (n--)) {
        if ((p = p->pred)->data <= e) break;
    }
    return p; //返回查找终止的位置
} //失败时，返回区间左边界的前驱（可能是header）——调用者可通过valid()判断成功与否

#endif //DATASTRUCT_LIST_SERACH_H
