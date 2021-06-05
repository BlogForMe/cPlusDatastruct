//
// Created by mc on 21-6-4.
//

#ifndef DATASTRUCT_BINNODE_INSERT_H
#define DATASTRUCT_BINNODE_INSERT_H


#include "BinNode.h"
#include "BinTree_insert.h"


template <typename  T> BinNodePosi<T> BinNode<T>::insertAsLC(const T & e) {
    return lc = new BinNode(e,this); //将e作为当前节点的左孩子插入二叉树
}

template <typename  T> BinNodePosi<T> BinNode<T>::insertAsRC(const T & e) {
    return rc = new BinNode(e,this); //将e作为当前节点的右孩子插入二叉树
}


#endif //DATASTRUCT_BINNODE_INSERT_H
