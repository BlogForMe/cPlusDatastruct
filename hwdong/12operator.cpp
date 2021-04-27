//
// Created by mc on 21-4-27.
//


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

    Point(double x_, double y_) {
        x = x_;
        y = y_;
    }

    Point operator+(const Point q) {
        return Point(this->x + q[0], this->y + q[1]);
    }

    //友元函数
    friend istream &operator>>(istream &o, Point p);

    friend ostream &operator<<(ostream &i, Point &p);

};

ostream &operator<<(ostream &o, Point p) {
    o << p.x << "  " << p.y << endl;
    return o;
}

istream &operator>>(istream &i, Point &p) {
    i >> p.x >> p.y;
    return i;
}
//
//int main() {
//    Point p(3.5, 4.8);
//    cin >> p;
//    cout << "d"
//
//}