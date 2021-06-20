//
// Created by mc on 21-6-7.
//

#ifndef DATASTRUCT_BST_REMOVE_H
#define DATASTRUCT_BST_REMOVE_H

#include "BST.h"
#include "bst_removeAt.h"

template <typename T> bool BST<T>::remove(const T & e) { //从BST树中删除关键码e
    BinNodePosi<T> & x = search(e); if(!x)return false;  //确认目标存在（留意_hot的设置）
    removeAt(x,_hot);this->_size--;
    this->updateHeightAbove(this->_hot);  //更新_hot及其历代祖先的高度
    return true;
}

#endif //DATASTRUCT_BST_REMOVE_H
