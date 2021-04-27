//
// Created by mc on 21-4-26.
// C++ 引用引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量
//

#if 0

#include <iostream>

using namespace std;

void swap(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

int main() {
    int a = 3, b = 4;
    cout << a << "\t" << b << endl;
    swap(a, b);
    cout << a << "\t" << b << endl;
}

#endif