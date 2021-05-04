//
// Created by mc on 21-5-3.
//

#if 1
#include "List.h"
#include "list_printAll.h"

int main() {

    List<int> mList ;

//    int a[] = {1, 2, 6, 5, 4, 7, 9, 8};
//    ListNodePosi<int> pList;
//    for (int i = 0; i < 10; ++i) {
//        pList->insertAsPred(i);
//    }

    cout<<"fe"<<endl;

    List<int> list;
    for (int i = 0; i < 10; ++i) {
        list.insertAsLast(i);
    }

    list.printAll();

//    mList.traverse_list(pList);
//    mList.traverse();



}

 void print(int t) {
    cout << t << " ";
}


#endif