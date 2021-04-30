#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "vector.cpp"

#if 0
using namespace std;

int main() {
    cout << "hello" << endl;

    // Vector test
    Vector<int> 02 = Vector<int>();
    02.report("Init");
    02.insert(0, 9);
    02.insert(0, 4);
    02.report("insert(0,4), insert(0, 9)"); // 4, 9
    02.insert(1, 5);
    02.report("insert(1,5)"); //4,5,9
    02.put(1, 2);
    02.report("put(1,2)"); //4,2,9
    cout << "get(2)=" << 02.get(2) << endl; //9
    02.insert(3,6);
    02.report("insert(3,6)"); //4,2,9,6
    02.insert(1, 7);
    02.report("insert(1, 7)"); //4,7,2,9,6
    02.remove(2);
    02.report("remove(2)"); //4,7,9,6
    02.insert(1,3);
    02.report("insert(1,3)"); //4,3,7,9,6
    02.insert(3, 4);
    02.report("insert(3, 4)"); //4,3,7,4,9,6
    cout << "size()=" << 02.size() << endl;

    cout << "disordered()=" << 02.disordered() << endl; // 3
    cout << "find(9)=" << 02.find(9) << endl; //4
    cout << "find(5)=" << 02.find(5) << endl; //-1
//
//    02.sort();
//    02.report("sorted"); //3,4,4,6,7,9
//
//    02.unsort();
//    02.report("unsort");
//    02.bubbleSort();
//    02.report("bubbleSort"); //3,4,4,6,7,9
//
//    02.unsort();
//    02.report("unsort");
//    02.bubbleSort_tuned_for_tail_in_order();
//    02.report("bubbleSort_tuned_for_tail_in_order"); //3,4,4,6,7,9
//
//    02.unsort();
//    02.report("unsort");
//    02.bubbleSort_tuned_for_header_in_order();
//    02.report("bubbleSort_tuned_for_header_in_order"); //3,4,4,6,7,9
//
//    02.unsort();
//    02.report("unsort");
//    02.bubbleSort_tuned_for_header_and_tail_in_order();
//    02.report("bubbleSort_tuned_for_header_and_tail_in_order"); //3,4,4,6,7,9
//
//
//    02.unsort();
//    02.report("unsort");
//    02.mergeSort();
//    02.report("mergeSort"); //3,4,4,6,7,9
//
//    02.unsort();
//    02.report("unsort");
//    02.insertionSort();  //习题 [3-8]
//    02.report("insertionSort"); //3,4,4,6,7,9
//
//
//    02.unsort();
//    02.report("unsort");
//    02.selectionSort();  //习题 [3-9]
//    02.report("selectionSort"); //3,4,4,6,7,9
//
//    cout << "disordered()=" << 02.disordered() << endl; // 0
//
//    cout << "search(1)=" << 02.search(1) << endl; //-1
//    cout << "search(4)=" << 02.search(4) << endl; //2
//    cout << "search(8)=" << 02.search(8) << endl; //4
//    cout << "search(9)=" << 02.search(9) << endl; //5
//    cout << "search(10)=" << 02.search(10) << endl; //5
//
//    02.uniquify();
//    02.report("uniquified");
//
//    cout << "search(9)=" << 02.search(9) << endl; //4
//
//    //习题 [2-34] Bitmap b) 测试
//    cout << "Bitmap test:" << endl;
//    Bitmap bitmap = Bitmap();
//    bitmap.set(0);
//    bitmap.set(1);
//    bitmap.set(9);
//    cout << "Bitmap:" << bitmap.bits2string(15) << endl; //110000000100000
//
//
//    //习题 [2-34] 无需初始化时间的 Bitmap c) 测试
//    cout << "Bitmap_without_init test:" << endl;
//    Bitmap_without_init bitmap2 = Bitmap_without_init(10);
//    bitmap2.set(0);
//    bitmap2.set(1);
//    bitmap2.set(9);
//    cout << "Bitmap:" << bitmap2.bits2string() << endl; //1100000001
//
//    //习题 [2-34] 无需初始化时间的 Bitmap c) 支持 clear()测试
//    cout << "Bitmap_without_init2 test:" << endl;
//    Bitmap_without_init2 bitmap3 = Bitmap_without_init2(10);
//    bitmap3.set(0);
//    bitmap3.set(1);
//    bitmap3.set(9);
//    cout << "Bitmap:" << bitmap3.bits2string() << endl; //1100000001
//    bitmap3.clear(1);
//    cout << "Bitmap:" << bitmap3.bits2string() << endl; //1000000001
//
//    //习题 2-35 测试
//    char* str = new char[101];
//    for(int i=0; i<100; i++){
//        str[i] = 'a' + rand()%26; //a-z
//    }
//    str[100] = '\0';
//
//    cout <<"ori: " << str <<endl;
//    uniquify_ascii(str, 100);
//
//    Eratosthenes(200, NULL);
}

#endif