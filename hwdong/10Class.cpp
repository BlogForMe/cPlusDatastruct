//
// Created by mc on 21-4-27.
//

#include <string>
#include <iostream>
#include <vector>

using namespace std;


/**
 * struct 里的成员默认是 public
 * class 里的成员默认事  private
 */
class student {

private:
    string name;
    double score;
public:
    student() { //默认构造函数
        name = "No";
        score = 0;
        cout << "构造函数" << endl;
    }

    student(string n, double s) {
        name = n;
        score = s;
        cout << "构造函数" << endl;
    }

    void print() {
        cout << this->name << " " << this->score << endl;
    }

    string get_name() {
        return name;
    }

    void set_name(string n) {
        name = n;
    }

    double get_score() {
        return score;
    }

    void set_score(double s) {
        score = s;
    }

    //友元函数
    friend ostream& operator<<(ostream &o, student s);

    friend istream& operator>>(istream &in, student &s);



};

ostream& operator<<(ostream &o, student s) {
    o << s.name << " , " << s.score << endl;
    return o;
}

istream& operator>>(istream &in, student &s) {
    in >> s.name >> s.score;
    return in;
}



//成员函数实际转化成  外部函数传入 指针
//void student::print(student *this) {
//    cout << this->name << " " << this->score << endl;
//}



#if 0
int main() {

    student stu; // 在创建一个类对象时会自动调用称为  "构造函数" 的成员函数
    student stu1("LiPing", 100);
//    stu.name = "Li Ping";
//    stu.score = 78.5;
//    stu.set_name("Li Ping");
//    stu.set_score(78.5);
    stu.print();
    stu1.print();

    cin >> stu;
    cout << stu; // operator<<(cout,stu)

    vector<student> students;
    cout << students.size();
    while (1) {
        student stu;
        cout << "请输入姓名 分数:\n";
        cin >> stu.name >> stu.score;
        students.push_back(stu);
        if (stu.score < 0) break;
        students.push_back(stu);
    }
    for (int i = 0; i < students.size(); ++i) {
        students[i].print();     // print(&stu)
    }
}
#endif