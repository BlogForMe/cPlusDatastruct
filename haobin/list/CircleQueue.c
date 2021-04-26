//
// Created by mc on 4/22/21.
//

#if(0)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Queue {
    int *pBase;
    int front;
    int rear;
} QUEUE;

void init(QUEUE *);

bool en_queue(QUEUE *, int val); //入队
void traverse_queue(QUEUE *);

bool full_queue(QUEUE *pQueue);//队列是否已满

bool out_queue(QUEUE *pQueue, int *pInt); //出队

bool empty_queue(QUEUE *pQueue);

int main() {
    QUEUE Q;
    init(&Q);
    en_queue(&Q, 2);
    en_queue(&Q, 7);
    en_queue(&Q, 33);
    en_queue(&Q, 4);
    en_queue(&Q, 9);

    traverse_queue(&Q); //执行这句 pQ->front会变，所以出队列失败

//    int pVal;
//    if(out_queue(&Q,&pVal)){
//        printf("出队成功，出队元素是 %d \n",pVal);
//    } else{
//        printf("出队失败\n");
//    }
//    traverse_queue(&Q);

}



void init(QUEUE *pQ) {
    pQ->pBase = malloc(sizeof(int) * 6);
    pQ->front = 0;
    pQ->rear = 0;
}

bool full_queue(QUEUE *pQ) {
    if ((pQ->rear + 1) % 6 == pQ->front) {
        return true;
    }
    return false;
}

bool en_queue(QUEUE *pQ, int val) {
    if (full_queue(pQ)) {
        return false;
    } else {
        pQ->pBase[pQ->rear] = val;
        pQ->rear = (pQ->rear + 1) % 6;
        return true;
    }
}

//void traverse_queue(QUEUE *pQ) {
//    int q = pQ->front;
//    while ((q) % 6 != pQ->rear) {
//        printf(" %d ", pQ->pBase[(pQ->front++) % 6]);
//        q++;
//    }
//    return;
//}
//或者下面方式

void traverse_queue(QUEUE *pQ) {
    int i = pQ->front;
    while (i!=pQ->rear){
        printf("%d ",pQ->pBase[i]);
        i = (i+1)%6;
    }
    printf("\n");
    return;
}


bool out_queue(QUEUE *pQ, int *pInt) {
    if(empty_queue(pQ)){
        return false;
    } else{
        *pInt = pQ->pBase[pQ->front];
        pQ->front=(pQ->front+1)%6;

        return true;
    }
}




bool empty_queue(QUEUE *pQ) {
    if(pQ->front==pQ->rear){
        return true;
    }
    return false;
}

#endif