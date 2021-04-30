//
// Created by mc on 21-4-29.
//

#include <iostream>
#include "MyVector.h"

using namespace std;

int main() {
//    cout<<"输出" <<endl;
    int a[] = {1, 2, 3, 5, 6, 7, 8, 9};
//    int a[100] ;
//    for (int i = 0; i < 100; ++i) {
//        a[i] = i;
//    }
//    MyVector<int> myVector= MyVector<int>();


    MyVector<int> myVector = MyVector<int>(a, 0, 3);
    myVector.report("traverse");

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
#endif


    cout << "binSearch " << myVector.binSearch(a, 4, 0, sizeof(a)/ sizeof(int)) << endl;
    myVector.test();
    return 0;
}