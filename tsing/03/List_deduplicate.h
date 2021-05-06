//
// Created by mc on 21-5-5.
//

#ifndef DATASTRUCT_LIST_DEDUPLICATE_H
#define DATASTRUCT_LIST_DEDUPLICATE_H

#include "List.h"

template<typename T>
int List<T>::deduplicate() {
    int oldSize = _size;
    Posi(T) p = first();
    for (Rank r = 0; p != trailer; p=p->succ)
        if (ListNodePosi<T> q = find(p->data, r, p)) {
            remove(q);  //此时q与p雷同，但删除前者更为简明
        } else {
            r++;  //r为无重前缀的长度
        }
    return oldSize-_size;  //删除元素总数

}

#endif //DATASTRUCT_LIST_DEDUPLICATE_H
