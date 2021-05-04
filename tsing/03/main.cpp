//
// Created by mc on 21-5-3.
//

#include "List.h"

int main() {

    List<int> mList ;

//    int a[] = {1, 2, 6, 5, 4, 7, 9, 8};
    ListNodePosi<int> pList;
    for (int i = 0; i < 10; ++i) {
        pList->insertAsPred(i);
    }


    mList.traverse_list(pList);
//    mList.traverse();



}

 void print(int t) {
    cout << t << " ";
}
