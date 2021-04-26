//
// Created by mc on 4/21/21.
//

#if(0)

#include <zconf.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data; //数据域
    struct Node *pNext; //指针域
} NODE, *PNODE; //NODE等价于struct Node   PNODE等价于struct Node *


//函数声明
PNODE create_list();

void traverse_list(PNODE pNode);

bool is_empty(PNODE);

int length_list(PNODE);

bool insert_list(PNODE, int, int);

bool delete_list(PNODE, int, int *);

void sort_list(PNODE);


int main() {
    PNODE pHead = NULL; //等价于 struct Node *pHead = NULL
    pHead = create_list();// 创建一个非循环但链表，并将该链表的头节点的地址 赋给pHead使用
//    traverse_list(pHead);
//
//    is_empty(pHead);
//    int length = length_list(pHead);
//    printf("链表长度为%d\n ", length);
//
//    sort_list(pHead);


//    insert_list(pHead, 2, 88);
    int data;
    delete_list(pHead, 2, &data);
    printf("排序后输出删除元素 %d\n ",data);

    traverse_list(pHead);
    return 0;
}

PNODE create_list() {
    int len;// 用来存放有效节点的个数
    int val; //用来临时存放用户输入的节点的值
    PNODE pHead = (PNODE) malloc(sizeof(NODE));
    PNODE pTail = pHead;
    pTail->pNext = NULL;                            //这一句感觉没啥用
    printf("请输入您需要生成的链表节点的个数: len = ");
    scanf("%d", &len);
    for (int i = 0; i < len; ++i) {
        printf("请输入第%d个节点的值: ", i + 1);
        scanf("%d", &val);

        PNODE pNew = (PNODE) malloc(sizeof(NODE));
        if (NULL == pNew) {
            printf("分配失败，程序终止!\n");
            exit(-1);
        }
        pNew->data = val;
        pTail->pNext = pNew;
        pNew->pNext = NULL;
        pTail = pNew;
    }

    return pHead;
}


void traverse_list(PNODE pNode) {
    PNODE p = pNode->pNext;
    while (p != NULL) {
        printf("输出%d\n", p->data);
        p = p->pNext;
    }
}

bool is_empty(PNODE pNode) {
    if (pNode->pNext == NULL) {
        return true;
    }
    return false;
}

int length_list(PNODE pNode) {
    PNODE p = pNode->pNext;
    int i = 0;
    while (p != NULL) {
        ++i;
        p = p->pNext;
    }
    return i;
}

//void sort_list(PNODE pNode) {
//    int len = length_list(pNode);
//    PNODE p = pNode->pNext;
//    for (int i = 0; i < len - 1; ++i) {
//        for (int j = i + 1; j < len - 1; ++j) {
//            if(a[i]>a[j]){
//                t =a[i];
//                a[i] = a[j];
//                a[j]= t;
//            }
//        }
//    }
//}
void sort_list(PNODE pHead) {
    int i, j, t;
    PNODE p, q;
    int len = length_list(pHead);
    for (i = 0, p = pHead->pNext; i < len - 1; ++i, p = p->pNext) {
        for (j = i + 1, q = p->pNext; j < len; ++j, q = q->pNext) {
            if (p->data > q->data) {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
        }
    }
}


bool insert_list(PNODE pHead, int pos, int val) {
    int i = 0;
    PNODE p = pHead;
    while (NULL != p && i < pos - 1) {
        p = p->pNext;
        ++i;
    }
    if (i > pos - 1 || NULL == p)
        return false;
    PNODE pNew = (PNODE) malloc(sizeof(NODE));
    if (NULL == pNew) {
        printf("动态分配内存失败\n");
        exit(-1);
    }
    pNew->data = val;
    PNODE q = p->pNext;
    p->pNext = pNew;
    pNew->pNext = q;
    return true;
}


bool delete_list(PNODE pHead, int pos, int *pVal) {
    int i = 0;
    PNODE p = pHead;
    while (NULL != p && i < pos - 1) {
        p = p->pNext;
        ++i;
    }
    if (i > pos - 1 || NULL == p)
        return false;
    PNODE q = p->pNext;
    *pVal = q->data;

    //删除p节点后面的节点
    p->pNext = p->pNext->pNext;
    free(q);
    q = NULL;
    return true;
}


#endif