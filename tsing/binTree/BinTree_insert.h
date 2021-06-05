//
// Created by mc on 21-6-4.
//

#ifndef DATASTRUCT_BINTREE_INSERT_H
#define DATASTRUCT_BINTREE_INSERT_H


#include "BinTree.h"
#include "BinNode.h"
#include "BInNode_insert.h"
#include "BinTree_updateHeight.h"

template<typename T>
BinNodePosi<T> BinTree<T>::insertAsRoot(T const &e) {
    _size = 1;
    return _root = new BinNode<T>(e);
} //将e当作根节点插入空的二叉树

/*DSA*/
/*DSA*/template<typename T>
BinNodePosi<T> BinTree<T>::insertAsLC(BinNodePosi<T> x, T const &e)
/*DSA*/{
    _size++;
    x->insertAsLC(e);
    updateHeightAbove(x);
    return x->lc;
} //e插入为x的左孩子

template<typename T>
BinNodePosi<T> BinTree<T>::insertAsRC(BinNodePosi<T> x, T const &e) {
    _size++;
    x->insertAsRC(e);
    updateHeightAbove(x);
    return x->rc;
} //e插入为x的右孩子
#endif //DATASTRUCT_BINTREE_INSERT_H
