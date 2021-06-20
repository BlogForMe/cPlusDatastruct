//
// Created by mc on 21-5-4.
//

#ifndef DATASTRUCT_LIST_INSERT_H
#define DATASTRUCT_LIST_INSERT_H

#include "List.h"
#include "listNode_insertAsSucc.h"



template <typename T> ListNodePosi<T> List<T>::insertAsFirst (T const& e )
{  _size++; return header->insertAsSucc ( e );  } //e当作首节点插入


template<typename T>
ListNodePosi<T> List<T>::insertAsLast(T const &e) {
    _size++;
    return trailer->insertAsPred(e);
} //e当作末节点插入


template<typename T>
ListNodePosi<T> List<T>::insertB(ListNodePosi<T> p, const T &e) {
    _size++;
    return p->insertAsPred(e); //e当作p的前驱插入（Before）
}


template <typename  T>
ListNodePosi<T> List<T>::insertA(ListNodePosi<T> p, const T &e) {
    _size++;
    return p->insertAsSucc(e); //e当作p的后继插入（After）
}
#endif //DATASTRUCT_LIST_INSERT_H
