//
// Created by mc on 21-6-6.
//

#include <cstdio>
#include <util.h>
#include "queue.h"


//元素类型
template<typename T>
void testQueue(int n) {

    Queue<T> Q;
    for (int i = 0; i < n; ++i) {
        Q.enqueue(i);
    }

    for (int j = 0; j < n; ++j) {
        printf(" %d ",Q.dequeue());
    }
}


#if 0

int main() {


    testQueue<int>(5); //元素类型可以在这里任意选择

    return 0;
}

#endif