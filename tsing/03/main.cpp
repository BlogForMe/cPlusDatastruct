//
// Created by mc on 21-5-3.
//

#if 1
#include "List.h"
#include "List_traverse.h"
#include "List_insert.h"
#include "list_destructor.h"

int main() {


    int a[] = {1, 2, 6, 5, 4, 7, 9, 8};

    List<int> list ;
    for (int i = 0; i < 10; ++i) {
        list.insertAsLast(i);
    }

    List<int> myList;
//    myList.copyNodes(list,4);

    list.traverse();
    list.remove(list.first()->succ);
    list.traverse();

}



#endif