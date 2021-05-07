//
// Created by mc on 21-5-6.
//

#ifndef DATASTRUCT_LISTNODE_INSERTASSUCC_H
#define DATASTRUCT_LISTNODE_INSERTASSUCC_H

#include "listnode.h"

//将e紧随当前节点之后插入于当前节点所属列表（设有哨兵尾节点trailer）
template<typename T>
ListNodePosi<T> ListNode<T>::insertAsSucc(const T &e) {
    ListNodePosi<T> x = new ListNode(e, this, succ);  //创建新节点
    succ->pred = x;
    succ = x;  //设置逆向链接
    return x; //返回新节点的位置
}

#endif //DATASTRUCT_LISTNODE_INSERTASSUCC_H
