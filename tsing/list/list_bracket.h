//
// Created by mc on 21-5-5.
//

#ifndef DATASTRUCT_LIST_BRACKET_H
#define DATASTRUCT_LIST_BRACKET_H

#include "listnode.h"

template<typename T>
//重载下标操作符，以通过秩直接访问列表节点（虽方便，效率低，需慎用）
T &List<T>::operator[](Rank r) const { //assert: 0 <= r < size
    ListNodePosi<T> p = first();   //从首节点出发
    while (0 < r--) p = p->succ;//顺数第r个节点即是
    return p->data;
}

#endif //DATASTRUCT_LIST_BRACKET_H
