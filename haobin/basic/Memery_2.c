//
// Created by mc on 4/18/21.
// 跨函数使用内存
//
#if(0)

#include <stdio.h>
#include <malloc.h>


struct Student{
    int sid;
    int age;
};


struct Student *createStudent(void);

void showStudent(struct Student *pst);

int main(){
    struct  Student *ps;
    ps = createStudent();
    showStudent(ps);
}

void showStudent(struct Student *pst) {
    printf("%d %d\n",pst->sid,pst->age);
}

struct Student *createStudent() {
    struct  Student *p = malloc(sizeof(struct Student)); //表示   struct Student整体的数据类型代表的字节数
            p->sid = 99;
            p->age = 88;
    return p;
}
#endif
