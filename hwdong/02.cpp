//
// Created by mc on 21-4-26.
//



#if 0

#include <iostream>

using namespace std;
using std::cout;

int main() {
    std::cout << "hello world!\n";
    std::cout << 3 + 4 << std::endl;


    cout << "hello world2!\n";
    cout << 4 + 4 << std::endl;
    cout<<"https://a.hwdong.com"<<endl;


    double  radius;
    std::cin>>radius; //标准输入流对象cin输入运算符
    cout<<3.14*radius*radius;
}

#elif 0

using namespace std;

void help();

int main() {
    while (1) {
        help();
        double a, b;
        char op;
        cin >> a >> op >> b;
        if (op == '+') {
            cout<<a + b <<endl;
        }
    }
}

void help() {
    cout << "=============简单计算器=============\n";
    cout << "请输入:左运算符 运算符  右运算符\n";
}

#elif 0

#include <fstream>
#include <iostream>
using std::cout;
using namespace std;
int main() {
    ofstream oF("test.txt");
    oF<<3.14 << "  "<<"hello woffrld\n";
    oF.close();
    ifstream iF("test.txt");
    double d;
    string str;
    iF >> d >>str;
    cout<<d<<" "<<str<<endl;
}

#endif