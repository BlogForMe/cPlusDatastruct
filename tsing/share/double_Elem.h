//
// Created by mc on 21-6-5.
//

#ifndef DATASTRUCT_DOUBLE_H
#define DATASTRUCT_DOUBLE_H

template<typename T>
struct Double //函数对象：倍增一个T类对象
{
    virtual void operator()(T &e) {
        printf("%d ", e);
    }
}; //假设T可直接倍增
#endif //DATASTRUCT_DOUBLE_H
