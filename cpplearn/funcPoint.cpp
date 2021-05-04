//
// Created by mc on 21-5-3.
// 函数指针 指针函数学习 https://blog.csdn.net/qq_18108083/article/details/84035165
//

#include <iostream>

using namespace std;

/**
 * 例子中函数指针pft指向了一个已经声明的函数bar()，然后通过pft来实现输出字符和整型的目的。
 */
#if 0
void bar(char, int);

typedef  void (*PFT)(char, int);
int main(){
    PFT pft;
    pft = bar;
    pft('e',91);
}
void bar(char ch,int i){
    cout<< " bar "<<ch<<' '<<i<<endl;
    return;
}

#endif

/**
 * 函数指针作为函数的参数，我们可以在一个函数的形参列表中传入一个函数指针，
 * 然后便可以在这个函数中使用这个函数指针所指向的函数
 */

#if 0

typedef void (*PFT)(char, int);

void bar(char ch, int i) {
    cout << "bar " << ch << ' ' << i << endl;
    return;
}

void foo(char ch, int i, PFT pf) {
    pf(ch, i);
    return;
}


int main() {
    PFT pft;
    pft = bar;
    foo('e', 12, pft);
}

#endif

/**
 * 函数对象
 */
#if 0

class A {
public:
    int operator()(int x) { return x; }
};


int main(){
    A a;
    cout<<a(5)<<endl;
}

#endif


#if 0

class Func {
public:
    int operator()(int a, int b) {
        cout << a << '+' << b << '=' << a + b << endl;
        return a;
    }
};

int addFunc(int a, int b, Func &func) {
    func(a, b);
    return a;
}

int main() {

    Func func;
    addFunc(1, 3, func);
}


#endif
