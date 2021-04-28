#include <iostream>
#include "temple/stack.h"

using namespace std;


#if 0
//  http://c.biancheng.net/view/1387.html


void doubleNum(int SrefVar);
int main()
{
    int value = 4;
    cout << "In main, value is " << value << endl;
    cout << "Now calling doubleNum..." << endl;
    doubleNum(value);
    cout << "Now back in main, value is "<< value << endl;
    return 0;
}
void doubleNum (int SrefVar)
{
    SrefVar *= 2;
}

#endif

#if 0

//Function prototypes
void getNum(int &);
int doubleNum(int);
int main()
{
    int value;
    // Call getNum to get a number and store it in value
    getNum(value);
    value = doubleNum(value);
    // Display the resulting number
    cout << "That value doubled is " << value << endl;
    return 0;
}
void getNum(int  &userNum)
{
    cout << "Enter a number: ";
    cin >> userNum;
}
int doubleNum (int number)
{
    return number *2;
}

#endif

#if 0


template<typename  T> void mySwap(T &a,T &b){
    cout<<"函数模板"<<endl;
    T tmp;
    tmp = a;
    a =b;
    b = tmp;
}

void  test01(){
    int data1 = 10,data2 = 20;
    mySwap(data1,data2);
}

int main() {
//    test01();
    Stack<int> s;
    s.push();
}


#endif