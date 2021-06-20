//
// Created by mc on 21-6-7.
//

#ifndef DATASTRUCT_BINNODEPOSI_H
#define DATASTRUCT_BINNODEPOSI_H

#include "../binTree/BinNode.h"
#include "BST.h"
#include "BinTree_updateHeight.h"
#include "BST_search.h"

template <typename T> BinNodePosi<T> BST<T>::insert(const T & e) { //将关键码e插入BST树中
    BinNodePosi<T> &x = search(e);if(x)return x; //确认目标不存在（留意对_hot的设置）
            x = new BinNode<T>(e,_hot); //创建新节点x：以e为关键码，以_hot为父
    this->_size++; //更新全树规模
    this->updateHeightAbove(x);
    return x; //新插入的节点，必为叶子
} //无论e是否存在于原树中，返回时总有x->data == e


#endif //DATASTRUCT_BINNODEPOSI_H
