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
//    ~List(); //释放（包含头、尾哨兵在内的）所有节点

    void printAll() const;
    void traverse(void (*visit )(T &)) {
        for (ListNodePosi<T> p = header->succ; p != trailer; p = p->succ) {
            visit(p->data);
        }
    }

    void traverse() const;

    void traverse_list(ListNodePosi<T> pNode) {
        cout<<("开始输出%d\n");

        ListNodePosi<T> p = pNode->succ;
        while (p != NULL) {
            cout<<("输出%d\n", p->data);
            p = p->succ;
        }
    }



//    ListNodePosi<T> insertAsFirst(T const&e){
//        _size++;
//        return header->
//    }




    ListNodePosi<T> insertAsLast(T const &e) {
        _size++;
        return trailer->insertAsPred(e); //e当作末节点插入
    }

    void copyNodes(Posi(T)p, int n) {
        init(); //创建头，尾哨兵节点并初始化
        while (n--) { //将起自
            insertAsLast(p->data);
            p = p->succ;
        }
    }

};


#endif //DATASTRUCT_LIST_H
