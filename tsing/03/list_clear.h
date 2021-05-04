//
// Created by mc on 21-5-4.
//

#ifndef DATASTRUCT_LIST_CLEAR_H
#define DATASTRUCT_LIST_CLEAR_H

#include "List.h"
#include "list_remove.h"

template <typename  T> int List<T>::clear() {
    int oldSize = _size;
    while (0<_size)remove(header->succ); //反复删除首节点，直至列表变空
    return  oldSize;
}

#endif //DATASTRUCT_LIST_CLEAR_H
