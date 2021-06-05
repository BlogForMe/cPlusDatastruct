//
// Created by mc on 21-6-5.
//

#ifndef DATASTRUCT_INCREASE_ELEM_H
#define DATASTRUCT_INCREASE_ELEM_H

#include "double_Elem.h"

template<typename T>
struct Increase //函数对象：递增一个T类对象
        : public Double<T> {
    virtual void operator()(T &e) { e++; }
}; //假设T可直接递增或已重载++

#endif //DATASTRUCT_INCREASE_ELEM_H
