//
// Created by john on 2021/4/21.
//

#if(0)

#include <printf.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node *pNext;
} NODE, *PNODE;

typedef struct Stack {
    PNODE pTop;
    PNODE pBottom;
} STACK, *PSTACK; //PSTACK等价于 stuct STACK *

void init(PSTACK);

void push(STACK *pStack, int i);

void traverse(STACK *pStack);

bool pop(PSTACK pS, int *pVal);
void  clear(PSTACK ps);

bool empty(PSTACK pStack);

int main() {
    STACK S; //等价于 struct Stack
    init(&S);
    push(&S, 1);
    push(&S, 22);
    push(&S, 88);

    traverse(&S);
    int val;
//    if (pop(&S, &val)) {
//        printf("出栈成功\n");
//        printf("出栈的数据 %d \n", val);
//    } else {
//        printf("出栈失败\n");
//    }

    clear(&S);

    printf("清空数据\n");
    traverse(&S);
}

void push(STACK *pStack, int val) {
    PNODE pNew = (PNODE) malloc(sizeof(NODE));
    pNew->data = val;
    pNew->pNext = pStack->pTop; //如果是空可以用pBottom，但是后面不为空
    pStack->pTop = pNew;
}


void init(PSTACK pS) {
    pS->pTop = (PNODE) malloc(sizeof(NODE));
    if (NULL == pS->pTop) {
        printf("动态内存分配失败!\n");
        exit(-1);
    } else {
        pS->pBottom = pS->pTop;
        pS->pTop->pNext = NULL;
    }

}

void traverse(PSTACK pS) {
    PNODE p = pS->pTop;
    while (p != pS->pBottom) {
        printf("%d ", p->data);
        p = p->pNext;
    }
}

//把pS所指向的栈出栈一次，并把出栈的元素存入pVal形参所指向的变量中，如果出栈失败，返回false,否则返回true,
bool pop(PSTACK pS, int *pVal) {
    *pVal = pS->pTop->data;
    PNODE p = pS->pTop;
    if (pS->pTop != pS->pBottom) { //或者写个方法 isEmpty()
        pS->pTop = pS->pTop->pNext;
        return true;
    }
    free(p);
    return false;
}

//清空
void  clear(PSTACK pS){

    if(empty(pS)){
        return;
    } else{

        PNODE  p = pS->pTop;
        PNODE  q = NULL;
        while(p!=pS->pBottom){
             q = p->pNext;
             free(p);
             p = q;
        }
        pS->pTop = pS->pBottom;
    }
}

bool empty(PSTACK pS) {
    if(pS->pTop==pS->pBottom){
        return true;
    }
    return false;
}

#endif