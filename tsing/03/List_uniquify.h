//
// Created by mc on 21-5-5.
//

#ifndef DATASTRUCT_LIST_UNIQUIFY_H
#define DATASTRUCT_LIST_UNIQUIFY_H

#include "List.h"

template <typename  T> int  List<T>::uniquify() { //成批剔除重复元素，效率更高
    if(_size<2) return  0;      //平凡列表自然无重复
    int oldSize = _size;
    Posi(T) p = first(); Posi(T) q ;
//    cout<<" p "<< p->data << " q "<<q->data<<endl;
    while(trailer!=(q=p->succ)){
        if(p->data==q->data){
            remove(q);
        } else{
            p = q;
        }
    }
    return oldSize-_size;
}


#endif //DATASTRUCT_LIST_UNIQUIFY_H
