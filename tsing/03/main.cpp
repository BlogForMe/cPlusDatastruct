//
// Created by mc on 21-5-3.
//

#if 0
#include "List.h"
#include "List_traverse.h"
#include "List_insert.h"
#include "list_destructor.h"
#include "list_bracket.h"
#include "List_find.h"
#include "List_uniquify.h"
#include "List_deduplicate.h"
#include "List_serach.h"
#include "list_initialize.h"
#include "List_SelectionSort.h"
#include "List_insertionsort.h"


int main() {   


//    int a[] = {1, 2, 6, 5, 4, 7, 9, 8};

    List<int> list ;
//    for (int i = 0; i < 10; ++i) {
//        list.insertAsLast(i);
//    }
    list.insertAsLast(1);
    list.insertAsLast(8);
    list.insertAsLast(6);
    list.insertAsLast(3);
    list.insertAsLast(2);
    list.insertAsLast(4);
    list.insertAsLast(9);
    list.insertAsLast(5);


//    list.traverse();
//    cout<< "list[3]  "<< list[3]<<endl;
//    list.remove(list.first()->succ);

    list.traverse();

//    cout<<"list.last() "<<list.last()->data<<endl;

//    Posi(int) p = list.find(8, 1, list.last());
//    cout<< " find(8, 1, list.last()) "<<p->data<<endl;
//    list.uniquify();
//    list.deduplicate();

//    cout<<"list.first() "<<list.first()->data<<endl;
    list.insertionSort(list.first(),list.size());
//    cout<<"search(5,5)  "<<list.search(9,1,list.last())->data<<endl;
    list.traverse();

}



#endif