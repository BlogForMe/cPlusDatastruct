//
// Created by mc on 21-5-6.
//

#ifndef DATASTRUCT_STACK_LIST_H
#define DATASTRUCT_STACK_LIST_H

#include <MyVector.h>

//以列表为基类，派生出栈模板类
template<typename T>
class Stack : public MyVector<T> {
public://size()、empty()以及其它开放接口，均可直接沿用
    void push(T const &e) { insert(e); } //入栈：等效于将新元素作为列表的首元素插入

    T pop() { return remove(size() - 1); } //出栈：等效于删除列表的首元素

    T &top() { return (*this)[size()]; } //取顶：直接返回列表的首元素

};

#endif //DATASTRUCT_STACK_LIST_H
