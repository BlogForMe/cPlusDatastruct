//
// Created by mc on 21-5-4.
//

#ifndef DATASTRUCT_LIST_INSERT_H
#define DATASTRUCT_LIST_INSERT_H

#include "List.h"

template <typename T> ListNodePosi<T> List<T>::insertAsLast (T const& e )
{  _size++; return trailer->insertAsPred ( e );  } //e当作末节点插入

#endif //DATASTRUCT_LIST_INSERT_H
