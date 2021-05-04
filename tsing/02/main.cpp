//
// Created by mc on 21-4-29.
//

#include <iostream>
#include "MyVector.h"

using namespace std;
#if 0

int main() {
//    cout<<"输出" <<endl;
    int a[] = {1, 2, 6, 5, 4, 7, 9, 8};
//    int a[100] ;
//    for (int i = 0; i < 100; ++i) {
//        a[i] = i;
//    }
//    MyVector<int> myVector= MyVector<int>();


    MyVector<int> myVector = MyVector<int>(a, 0, sizeof(a) / sizeof(int));
//    myVector.report("traverse");

    myVector.print(a);
#if 0
    myVector.insert(4);
    myVector.insert(6);
    myVector.insert(5);
    myVector.insert(7);
    myVector.insert(9);
    myVector.insert(8);
    myVector.insert(8);
    myVector.insert(8);
    myVector.insert(10);
    myVector.report("insert()");


    cout<<myVector[1]<<endl;
    myVector[1] = 8;
    cout<<myVector[1]<<endl;

    myVector.remove(2, 5);
    myVector.report("remove(2,5)");


    cout << "find(4,1,8) " << myVector.find(4, 1, 8) << endl;
    cout << "findEqua  if (_elem[j++]==_elem[i]){ls(4,1,8) " << myVector.findEquals(4, 1, 8) << endl;
                                 _elem[i++] = _elem[j];
    myVector.deduplic        }ate();
    myVector.report("deduplicate");

    cout << " disOrdered " << myVector.disOrdered() << endl;

    myVector.uniquify();
    myVector.report("uniquify");



//    cout << "binSearch " << myVector.binSearch(a, 3, 0, sizeof(a)/ sizeof(int)) << endl;
//    myVector.test();
    myVector.bubbleSort(0, sizeof(a) / sizeof(int));
//    myVector.report("uniquify");

#endif
    return 0;
}


#endif