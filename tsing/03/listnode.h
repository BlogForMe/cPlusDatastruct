//
// Created by mc on 21-5-3.
//

#ifndef DATASTRUCT_LISTNODE_H
#define DATASTRUCT_LISTNODE_H

using  namespace std;

#include <clocale>
#include <iostream>
#include "List.h"

#define Posi(T) ListNode<T>*

using Rank = int; //秩
template<typename T>
struct ListNode;
template<typename T> using ListNodePosi = ListNode<T> *;  //列表节点位置
template<typename T>
struct ListNode { //列表节点模板类（以双向链表形式实现）
    T data;
    ListNodePosi<T> pred;
    ListNodePosi<T> succ; //数值、前驱、后继
    ListNode() {}

    ListNode(T e, ListNodePosi<T> p = NULL, ListNodePosi<T> s = NULL) : data(e), pred(p), succ(s) {} //默认构造器

    // 操作接口
    ListNodePosi <T> insertAsPred(T const&e){//紧靠当前节点之前插入新节点
        ListNodePosi<T> x = new ListNode(e,pred,this); //创建新节点
        pred->succ = x;
        this->pred= x;//设置正向链接,这里是当前节点的前置节点的意思，容易和节点pred混淆
        return x; //返回新节点的位置
    }


    ListNodePosi <T> insertAsSucc(T const&e); //紧随当前节点之后插入新节点




};


#endif //DATASTRUCT_LISTNODE_H
