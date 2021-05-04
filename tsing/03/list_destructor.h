//
// Created by mc on 21-5-4.
//

#ifndef DATASTRUCT_LIST_DESTRUCTOR_H
#define DATASTRUCT_LIST_DESTRUCTOR_H

#include "List.h"
#include "list_clear.h"

template<typename  T> List<T>::~List() { //列表析构器
    clear(); delete  header;delete  trailer; //清空列表，释放头、尾哨兵节点
}


#endif //DATASTRUCT_LIST_DESTRUCTOR_H
