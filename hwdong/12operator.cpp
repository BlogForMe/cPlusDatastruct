//
// Created by mc on 21-4-27.
// 运算符重载
//


#if 0

#include <iostream>

using namespace std;

class Point {
public:
    double x, y;

public:
    double operator[](int i) const { //const函数
        if (i == 0)return x;
        else if (i == 1)return y;
        else throw "下标非法!"; //抛出异常
    }

    double &operator[](int i) {
        if (i == 0)return x;
        else if (i == 1)return y;
        else throw "下标非法!"; //抛出异常
    }

    Point(double x_,double y_) {
        x = x_; y = y_;
    }
    Point operator+(const Point q) {
        return Point(this->x+q[0],this->y + q[1]);
    }

    //友元函数

    friend ostream & operator<<(ostream &o, Point p);
    friend istream & operator>>(istream &i, Point &p);
};

ostream & operator<<(ostream &o, Point p) {
    o <<p.x << " " << p.y<< endl;
    return o;
}
istream & operator>>(istream &i, Point &p) {
    i >> p.x >> p.y;
    return i;
}
/* Point operator+(const Point p,const Point q) { return Point(p[0] + q[0], p[1] + q[1]); } */

int main() {
    Point p(3.5, 4.8),q(2.0,3.0);


// cin >> p;

    cout << p;
    cout << p[0] << "-" << p[1] << endl; //p.operator[](0)

    p[0] = 3.45; p[1] = 5.67;
    cout << p;


    cout << p<<q;
    Point s = p + q; //p.operator+(q) vs operator+(p,q)

    cout << s;
}


#endif