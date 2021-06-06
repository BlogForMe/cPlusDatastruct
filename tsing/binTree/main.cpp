

//
// Created by mc on 21-6-4.
//

#include <rand.h>
#include <cstdio>
#include <release.h>
#include <double_Elem.h>
#include <increase_Elem.h>
#include "BinTree.h"
#include "BinTree_insert.h"

#include "BinNode_macro_BASIC.h"
#include "BinNode.h"

int testID = 0; //测试编号

// 随机生成期望高度为h的二叉树
template<typename T>
bool randomBinTree(BinTree<T> &bt, BinNodePosi<T> x, int h) {
    if (0 >= h) return false; //至多h层
    if (0 < dice(h)) {  //以1/h的概率终止当前分支的生长
        int leftDice = dice((T) h * h * h);
        printf(" h %d   left  %d  \n", h, leftDice);
        randomBinTree(bt, bt.insertAsLC(x, leftDice), h - 1);
    }
    if (0 < dice(h)) //以1/h的概率终止当前分支的生长
    {
        int rightDice = dice((T) h * h * h);
        printf(" h  %d  right %d \n", h, rightDice);
        randomBinTree(bt, bt.insertAsRC(x, rightDice), h - 1);
    }
    return true;
}

/**
 * 二叉树 传统遍历方式
 * @tparam T
 * @param x
 */
template<typename T>
void traverse(BinNodePosi<T> x) {
    if (!x)return;
    printf(" %d", x->data);
    traverse(x->lc);
    traverse(x->rc);
};


// 在二叉树中随机确定一个节点位置
template<typename T>
BinNodePosi<T> randomPosiInBinTree(BinNodePosi<T> root) {
    if (!HasChild (*root)) return root;
    if (!HasLChild (*root))
        return dice(6) ? randomPosiInBinTree(root->rc) : root;
    if (!HasRChild (*root))
        return dice(6) ? randomPosiInBinTree(root->lc) : root;
    return dice(2) ?
           randomPosiInBinTree(root->lc) :
           randomPosiInBinTree(root->rc);
}

template<typename T>
void testBinTree(int h) { //测试二叉树
    printf("\n  ==== Test %2d. Generate a binTree of height <= %d \n", testID++, h);
    BinTree<T> bt;
    int root = dice((T) h * h * h);
    printf("root %d \n", root);
    bt.insertAsRoot(root);
    randomBinTree<T>(bt, bt.root(), h);
    printf("\n  ==== Test %2d. double_Elem and increase all nodes by traversal\n", testID++);
//    bt.travPre(Double<T>()); //先序遍历

//    traverse(bt.root()); 普通遍历方法


    bt.travIn(Double<T>());
//    bt.travIn(Increase<T>());
//   bt.travPost ( Double<T>() ); bt.travPost ( Increase<T>() ); print ( bt );
//   bt.travLevel ( Double<T>() ); bt.travLevel ( Increase<T>() ); print ( bt );
//    Hailstone<T> hs; bt.travIn ( hs ); print ( bt );
//    printf ( "\n  ==== Test %2d. Remove/release subtrees in the Tree\n", testID++ );
//    while ( !bt.empty() ) {
//        BinNodePosi<T> p = randomPosiInBinTree ( bt.root() ); //随机选择一个节点
//        if ( dice ( 2 ) ) {
//            printf ( "removing " ); print ( p->data ); printf ( " ...\n" );
//            printf ( "%d node(s) removed\n", bt.remove ( p ) ); print ( bt );
//        } else {
//            printf ( "releasing " ); print ( p->data ); printf ( " ...\n" );
//            BinTree<T>* S = bt.secede ( p ); print ( S );
//            printf ( "%d node(s) released\n", S->size() ); release ( S ); print ( bt );
//        }
//    }
}

int main() {

    int m = 4;
    testBinTree<int>(m);

    return 0;
}