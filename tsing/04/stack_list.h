//
// Created by mc on 21-5-7.
//

#ifndef DATASTRUCT_STACK_LIST_H
#define DATASTRUCT_STACK_LIST_H

#include "../list/List.h"
#include "../list/List_insert.h"
#include "../list/list_remove.h"
#include "../list/list_initialize.h"
#include "../list/list_destructor.h"

template<typename T>
class Stack : public List<T> { //将列表的首/末端作为栈顶/底
public: //size()、empty()以及其它开放接口，均可直接沿用
    void push(T const &e) { this->insertAsLast(e); }

    T pop() { return this->remove(this->last()); }

    T &top() { return this->last()->data ;};
};


#endif //DATASTRUCT_STACK_LIST_H
