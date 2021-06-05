//
// Created by mc on 21-6-5.
//

#ifndef DATASTRUCT_BINNODE_TRAVPREORDER_I1_H
#define DATASTRUCT_BINNODE_TRAVPREORDER_I1_H

#include "BinNode.h"
#include "BinNode_macro_BASIC.h"
#include "../04/stack_vector.h"

template<typename T, typename VST>
//元素类型、操作器
void travPre_I1(BinNodePosi<T> x, VST &visit) { //二叉树先序遍历算法（迭代版#1）
    Stack<BinNodePosi<T>> S; //辅助栈
    if (x) S.push(x); //根节点入栈
    while (!S.empty()) { //在栈变空之前反复循环
        x = S.pop();
        visit(x->data); //弹出并访问当前节点，其非空孩子的入栈次序为先右后左
        printf(" %d " ,x->data);
        if (HasRChild (*x)) S.push(x->rc);
        if (HasLChild (*x)) S.push(x->lc);
    }
}

#endif //DATASTRUCT_BINNODE_TRAVPREORDER_I1_H
