//
// Created by mc on 21-5-3.
//

#ifndef DATASTRUCT_LIST_H
#define DATASTRUCT_LIST_H

#include "listnode.h"

template<typename T>
class List { //列表模板类
private:
    int _size;
    ListNodePosi<T> header;
    ListNodePosi<T> trailer; //规模、头哨兵、尾哨兵


protected:
    void init() { //列表创建时的初始化
        header = new ListNode<T>;
        trailer = new ListNode<T>;
        header->succ = trailer;
        header->pred = NULL;
        trailer->pred = header;
        trailer->succ = NULL;
        _size = 0;//记录规模
    }


public:
    List() { init(); } //默认

    List(List<T> const &L); //整体复制列表L
    // 析构函数
    ~List(); //释放（包含头、尾哨兵在内的）所有节点
    T&operator[](Rank r) const ;  //规模

    int clear(); //清除所有节点

    ListNodePosi<T> first() const { return header->succ; } //首节点位置

    Posi(T) find(T const &e,int n,Posi(T) p)const; //顺序查找

    T remove(ListNodePosi<T> p);  //删除合法位置p处的节点,返回被删除节点


    void reverse(); //前后倒置（习题）

    void traverse();

    // 遍历
    void traverse ( void (* ) ( T& ) ); //遍历，依次实施visit操作（函数指针，只读或局部性修改）

    template <typename VST> //操作器
    void traverse ( VST& ); //遍历，依次实施visit操作（函数对象，可全局性修改）



    ListNodePosi<T> insertAsLast(T const &e) ; //e当作末节点插入


    void copyNodes(ListNodePosi<T> p, int n) {
        init(); //创建头，尾哨兵节点并初始化
        while (n--) { //将起自
            insertAsLast(p->data);
            p = p->succ;
        }
    }

};


#endif //DATASTRUCT_LIST_H
