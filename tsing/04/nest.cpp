//
// Created by mc on 21-5-7.
//

#include "nest.h"
#include "stack_vector.h"

bool paren(const char exp[],int lo,int hi){ //表达式括号匹配检查，可兼顾三种括号
    Stack<char> S; //使用栈记录已发现但尚未匹配的左括号
    for (int i = lo; i < hi; ++i) {
        if('('== exp[i]) S.push(exp[i]);
        else if(!S.empty()) S.pop();
        else return false;
    }
    return  S.empty();   //最终栈空，当且仅当匹配
}