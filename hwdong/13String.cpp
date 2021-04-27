//
// Created by mc on 21-4-27.
//

#include <iostream>
using namespace std;

class String {
    char *data; //C风格的字符串

    int n;
public:
    ~String() {
        cout <<n<< " 析构函数!\n";
        if(data)
            delete[] data;
    }

    String(const String &s) { //硬拷贝

        cout << "拷贝构造函数!\n";
        data = new char[s.n + 1];
        n = s.n;
        for (int i = 0; i < n; i++)
            data[i] = s.data[i];
        data[n] = '\0';
    }



    String(const char *s=0) {
        cout << "构造函数!\n";
        if (s == 0) {
            cout << "s==0\n";
            data = 0; n = 0; return;
        }
        const char *p = s;
        while (*p) p++;
        n = p - s;
        data = new char[n + 1];
        for (int i = 0; i < n; i++)
            data[i] = s[i];
        data[n] = '\0';
    }

    int size() { return n; }

    char operator[](int i)const {
        if (i<0 || i>=n ) throw "下标非法";
        return data[i];
    }

    char& operator[](int i) {
        if (i < 0 || i >= n) throw "下标非法";
        return data[i];
    }
};

ostream & operator<<(ostream &o, String s) {
    for (int i = 0; i < s.size(); i++)
        cout << s[i];
    return o;
}

void f() {
    String str,str2("hello world");
    str2[1] = 'E';
// cout << str2 << endl;


    String s3 = str2; //拷贝构造函数

    cout << s3 << endl;
    s3[3] = 'L';
    cout << s3 << endl;
    cout << str2 << endl;


}


int main() {
    f();
}