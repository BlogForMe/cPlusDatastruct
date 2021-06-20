//
// Created by mc on 21-6-8.
//

#ifndef DATASTRUCT_AVL_INSERT_H
#define DATASTRUCT_AVL_INSERT_H

#include <BinNode.h>
#include <BinNode_macro_AVL.h>
#include "AVL.h"
#include "AVL_macro.h"

template<typename T>
BinNodePosi<T> AVL<T>::insert(const T &e) { //将关键码e插入AVL树中
    BinNodePosi<T> &x = search(e);
    if (x) return x; //确认目标节点不存在
    BinNodePosi<T> xx = x = new BinNode<T>(e, _hot);
    _size++; //创建新节点x
    // 此时，x的父亲_hot若增高，则其祖父有可能失衡

    for (BinNodePosi<T> g = _hot; g = g->parent;) //从x之父出发向上，逐层检查各代祖先g
        if (!AvlBalanced(*g)) { //一旦发现g失衡，则（采用“3 + 4”算法）使之复衡，并将子树
            FromParentTo(*g) = rotateAt(tallerChild(tallerChild(g))); //重新接入原树
            break; //局部子树复衡后，高度必然复原；其祖先亦必如此，故调整结束
        } else { //否则（g仍平衡）
            updateHeight ( g ); //只需更新其高度（注意：即便g未失衡，高度亦可能增加）
        }
    return  xx;//返回新节点位置
} //无论e是否存在于原树中，总有AVL::insert(e)->data == e


#endif //DATASTRUCT_AVL_INSERT_H
