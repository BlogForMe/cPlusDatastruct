//
// Created by mc on 21-6-7.
//

/**
 *                       5
 *                    4       36
 *                          27         58
 *                        6         53     64
 *                              40
 *                                 46
 */

#include <util.h>
#include "../binTree/BinNode.h"
#include "BST.h"
#include "BST_insert.h"
#include "BinTree_insert.h"
#include "BST_remove.h"

template<typename T>
void testBSTMY(int i) {
    BST<T> bst;
    bst.insertAsRoot(5);
    bst.insertAsLC(bst.root(),4);
    BinNodePosi<T> rc11 = bst.insertAsRC(bst.root(), 36);
    
    BinNodePosi<T> lc1 = bst.insertAsLC(rc11, 27);
    bst.insertAsLC(lc1,6);

    BinNodePosi<T> rc1 = bst.insertAsRC(rc11, 58);
    BinNodePosi<T> lc2 = bst.insertAsLC(rc1, 53);
    BinNodePosi<T> lc3 = bst.insertAsLC(lc2, 40);
    bst.insertAsRC(lc3,46);
    bst.insertAsRC(rc1,64);


//    BinNodePosi<T> & chot = bst.search(55);

    BinNodePosi<T> insertTree = bst.insert(38);  //插入节点

    bool removeTree = bst.remove(36); //删除节点
    printf("d");
}

template<typename T>
void testBST(int n) {
    BST<T> bst;
    while (bst.size() < n) bst.insert(dice((T) n * 3)); //随机创建
//    bst.stretchToLPath(); //伸直成撇
//    while ( !bst.empty() ) bst.remove ( bst.root()->data ); //清空
//    while ( bst.size() < n ) bst.insert ( dice ( ( T ) n * 3 ) ); //随机创建
//    bst.stretchToRPath(); //伸直成捺
//    while ( !bst.empty() ) bst.remove ( bst.root()->data ); //清空
//    while ( bst.size() < n ) { //随机插入、查询、删除
//        T e = dice ( ( T ) n * 3 ); //[0, 3n)范围内的e
//        switch ( dice ( 3 ) ) {
//            case 0: { //查找，成功率 <= 33.3%
//                printf ( "Searching for " ); print ( e ); printf ( " ... " );
//                BinNodePosi<T> & p = bst.search ( e );
//                p ?
//                printf ( "Found with" ), print ( p->data ), printf ( "\n" ) :
//                printf ( "not found\n" );
//                break;
//            }
//            case 1: { //删除，成功率 <= 33.3%
//                printf ( "Removing " ); print ( e ); printf ( " ... " );
//                bst.remove ( e ) ?
//                printf ( "Done\n" ), print ( bst ) :
//                printf ( "not exists\n" );
//                break;
//            }
//            default: {//插入，成功率 == 100%
//                printf ( "Inserting " ); print ( e ); printf ( " ... " );
//                printf ( "Done with" ), print ( bst.insert ( e )->data ), printf ( "\n" ),
//                break;
//            }
//        }
//    }
//    while ( bst.size() > 0 ) { //清空
//        T e = dice ( ( T ) n * 3 ); //[0, 3n)范围内的e
//        printf ( "Removing " ); print ( e ); printf ( " ... " );
//        bst.remove ( e ) ? printf ( "Done\n" ), print ( bst ) : printf ( "not exists\n" );
//    }
}

#if 0

int main(int argc, char *argv[]) {
//    testBST<int>(5); //元素类型可以在这里任意选择
    testBSTMY<int>(5); //元素类型可以在这里任意选择
    return 0;
}



#endif