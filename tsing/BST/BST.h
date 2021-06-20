//
// Created by mc on 21-6-7.
//

#ifndef DATASTRUCT_BST_H
#define DATASTRUCT_BST_H

#include "../binTree/BinTree.h"

template<typename T>
class BST : public BinTree<T> {
public: //由BinTree派生BST模板类
    virtual BinNodePosi<T> &search(const T &); //查找
    virtual BinNodePosi<T> insert(const T &); //插入
    virtual bool remove(const T &); //删除

protected: //基本接口：以virtual修饰，强制要求所有派生类（BST变种）根据各自的规则对其重写
    BinNodePosi<T> _hot; //“命中”节点的父亲
    BinNodePosi<T> connect34( //按照“3 + 4”结构，联接3个节点及四棵子树
            BinNodePosi<T>, BinNodePosi<T>, BinNodePosi<T>,
            BinNodePosi<T>, BinNodePosi<T>, BinNodePosi<T>, BinNodePosi<T>);

    BinNodePosi<T> rotateAt(BinNodePosi<T> x); //对x及其父亲、祖父做统一旋转调整
};

#endif //DATASTRUCT_BST_H
