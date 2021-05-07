//
// Created by mc on 21-5-6.
//

#ifndef DATASTRUCT_CONVERT_H
#define DATASTRUCT_CONVERT_H

template <typename T>
void convert(Stack<T> &S, __int64_t n, int base) {
    char digit[] = "0123456789ABCDEF"; //数位符号，如有必要可相应扩充
    while (n > 0) { //由低到高，逐一计算出新进制下的各数位
        int index = n % base;
//        std::cout<<" index "<<index;
        S.push(index); //余数（当前位）入栈
        n /= base; //n更新为其对base的除商
    }
    std::cout<<endl;
}

#endif //DATASTRUCT_CONVERT_H
