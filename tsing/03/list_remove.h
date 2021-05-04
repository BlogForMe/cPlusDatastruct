//
// Created by mc on 21-5-4.
//

#ifndef DATASTRUCT_LIST_REMOVE_H
#define DATASTRUCT_LIST_REMOVE_H

#include "listnode.h"

template<typename T>
T List<T>::remove(ListNodePosi<T> p) {//删除合法节点p，返回其数值
    T e = p->data;
    p->pred->succ = p->succ;//删除后继、
    p->succ->pred = p->pred;  //前驱
    delete p;
    _size--; //释放节点，更新规模
    return e;
}

#endif //DATASTRUCT_LIST_REMOVE_H
