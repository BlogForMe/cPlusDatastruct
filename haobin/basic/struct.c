//
// Created by mc on 4/18/21.
// 结构体变量
//
#if(0)

#include <stdio.h>
#include <memory.h>

struct Student {
    int sid;
    char name[200];
    int age;
};


void g(struct Student student);

void g2(struct Student *pst);

void f(struct Student *pst);

int main() {
    struct Student st = {1000, "张三", 20};
    printf("%d   %s   %d\n", st.sid, st.name, st.age);
    st.sid = 99;
//    st.name = "lili"; //error
    strcpy(st.name, "lili");//复制
    st.age = 22;
    printf("%d   %s   %d\n", st.sid, st.name, st.age);


    struct Student *pst;
    pst = &st;
    pst->sid = 99; //  pst -> sid 等价于 (*pst).sid 而(*pst).sid 等价于 st.sid

    // pst -> sid
    // 所指向的结构体变量的sid这个成员

    g(st);
    g2(&st);

    return 0;
}

void g2(struct Student *pst) {
    printf("g2  %d   %s   %d\n", pst->sid, pst->name, pst->age);
}

//这种方式多耗 208 内存，耗时间 不推荐
void g(struct Student st) {
    printf("g  %d   %s   %d\n", st.sid, st.name, st.age);
}

#endif