//
// Created by mc on 21-5-6.
//

#ifndef DATASTRUCT_LIST_INITIALIZE_H
#define DATASTRUCT_LIST_INITIALIZE_H

#include "List.h"

template<typename T>
void List<T>::init() {
    header = new ListNode<T>;
    trailer = new ListNode<T>;
    header->succ = trailer;
    header->pred = NULL;
    trailer->pred = header;
    trailer->succ = NULL;
    _size = 0;//记录规模
}


#endif //DATASTRUCT_LIST_INITIALIZE_H
