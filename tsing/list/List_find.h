//
// Created by mc on 21-5-5.
//

#ifndef DATASTRUCT_LIST_FIND_H
#define DATASTRUCT_LIST_FIND_H

#include "List.h"
#include "listnode.h"

template<typename T>
ListNodePosi<T> List<T>::find(const T &e, int n, ListNode<T> *p) const {//在无序列表内节点p（可能是trailer）的n个（真）前驱中，找到等于e的最后者
    while (0 < n--){//（0 <= n <= rank(p) < _size）对于p的最近的n个前驱，从右向左
        if (e == (p = p->pred)->data) return p; //逐个比对，直至命中或范围越界
//        cout<<p->data<<endl;
    }
    return NULL;

}

#endif //DATASTRUCT_LIST_FIND_H
