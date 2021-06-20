//
// Created by mc on 21-6-7.
//

#ifndef DATASTRUCT_BST_SEARCH_H
#define DATASTRUCT_BST_SEARCH_H

#include "../binTree/BinNode.h"
#include "BST.h"
#include "BinTree.h"

template<typename T>
BinNodePosi<T> &BST<T>::search(const T &e) { //在BST中查找关键码e
    if (!this->_root || e == this->_root->data) {
        _hot = NULL;
        return this->_root;
    } //在树根v处命中
    for (_hot = this->_root;;) {  //否则，自顶而下
        BinNodePosi<T> &c = (e < _hot->data) ? _hot->lc : _hot->rc; //确定方向
        if (!c || e == c->data)return c; //命中返回，或者深入一层
        _hot = c;
    }//无论命中或失败，hot均指向v(最终确定节点的)之父亲（v是根时，hot为NULL）
}  //返回目标节点位置的引用，以便后续插入、删除操作


#endif //DATASTRUCT_BST_SEARCH_H
