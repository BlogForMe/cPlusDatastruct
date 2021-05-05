//
// Created by mc on 21-5-3.
//

#if 1
#include "List.h"
#include "List_traverse.h"
#include "List_insert.h"
#include "list_destructor.h"
#include "list_bracket.h"

int main() {


    int a[] = {1, 2, 6, 5, 4, 7, 9, 8};

    List<int> list ;
    for (int i = 0; i < 10; ++i) {
        list.insertAsLast(i);
    }

    List<int> myList;
//    myList.copyNodes(list,4);

    list.traverse();
    cout<< "list[3]  "<< list[3]<<endl;
    list.remove(list.first()->succ);

    list.traverse();

}



#endif