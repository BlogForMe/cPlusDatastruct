//
// Created by mc on 4/24/21.
//


#if(0)

#include <zconf.h>
#include <malloc.h>

struct BTNode {
    int data;
    struct BTNode *pLchild;
    struct BTNode *pRchild;
};


struct BTNode *createBTree();

void preTraverseBTree(struct BTNode *pNode);

int main() {
    struct BTNode *pT = createBTree();

//    preTraverseBTree(pT);
//    inTraverseBTree(pT);
    postTraverseBTree(pT);

    return 0;
}

void preTraverseBTree(struct BTNode *pNode) {
    if (pNode->data != NULL) {
        printf("%c\n", pNode->data);
        if (pNode->pLchild != NULL) {
            preTraverseBTree(pNode->pLchild);
        }

        if (pNode->pRchild != NULL) {
            preTraverseBTree(pNode->pRchild);
        }
    }
}

void inTraverseBTree(struct BTNode *pNode) {
    if (pNode->data != NULL) {

        if (pNode->pLchild != NULL) {
            inTraverseBTree(pNode->pLchild);
        }
        printf("%c\n", pNode->data);

        if (pNode->pRchild != NULL) {
            inTraverseBTree(pNode->pRchild);
        }
    }
}

void postTraverseBTree(struct BTNode *pNode) {
    if (pNode->data != NULL) {
        if (pNode->pLchild != NULL) {
            postTraverseBTree(pNode->pLchild);
        }
        if (pNode->pRchild != NULL) {
            postTraverseBTree(pNode->pRchild);
        }
        printf("%c\n", pNode->data);
    }
}

struct BTNode *createBTree() {
    struct BTNode *pA = (struct BTNode *) malloc(sizeof(struct BTNode));
    struct BTNode *pB = (struct BTNode *) malloc(sizeof(struct BTNode));
    struct BTNode *pC = (struct BTNode *) malloc(sizeof(struct BTNode));
    struct BTNode *pD = (struct BTNode *) malloc(sizeof(struct BTNode));
    struct BTNode *pE = (struct BTNode *) malloc(sizeof(struct BTNode));

    pA->data = 'A';
    pB->data = 'B';
    pC->data = 'C';
    pD->data = 'D';
    pE->data = 'E';

    pA->pLchild = pB;
    pA->pRchild = pC;
    pB->pLchild = pB->pRchild = NULL;
    pC->pLchild = pD;
    pC->pRchild = NULL;
    pD->pLchild = NULL;
    pD->pRchild = pE;
    pE->pLchild = pE->pRchild = NULL;
    return pA;
}


#endif