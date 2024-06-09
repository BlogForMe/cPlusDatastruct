cmake_minimum_required(VERSION 3.10)
project(datastruct)

set(CMAKE_CXX_STANDARD 11)


include_directories(tsing/02)
include_directories(tsing/share)
include_directories(tsing/hashtable)
include_directories(tsing/list)
include_directories(tsing/vector)
include_directories(tsing/BST)
include_directories(tsing/binTree)
include_directories(tsing/UniPrint)
include_directories(tsing/Entry)
include_directories(tsing/Dictionary)
include_directories(tsing/BitMap)
include_directories(tsing/prime)
include_directories(tsing/graph)
include_directories(tsing/PQ)
include_directories(tsing/PQ_ComplHeap)
include_directories(tsing/PQ_List)
include_directories(tsing/string_pm)



add_executable(datastruct
        haobin/basic/array_int_1.c
        haobin/basic/array_int_2.c
        haobin/basic/malloc_1.c
        haobin/basic/Memery_2.c
        haobin/basic/point3.c
        haobin/basic/point_3.c
        haobin/basic/struct.c
        haobin/basic/type_1.c
        haobin/basic/type_2.c
        haobin/basic/type_3.c
        haobin/list/Arr.c
        haobin/list/CircleQueue.c
        haobin/list/list.c
        haobin/recursive/factorial.c
        haobin/recursive/Fibonacci.c
        haobin/recursive/HanNuoTa.c
        haobin/recursive/recursive.c
        haobin/stack/stack.c
        haobin/tree.c
        hwdong/01.cpp
        hwdong/02.cpp
        hwdong/04refrence.cpp
        hwdong/05_param.cpp
        hwdong/06template.cpp
        hwdong/07vector.cpp
        hwdong/08point.cpp
        hwdong/10Class.cpp
        hwdong/12operator.cpp
        hwdong/13String.cpp
        tsing/02/main.cpp
        tsing/02/MyVector.cpp
        tsing/02/MyVector.h
        tsing/share/rand.h
        tsing/1_5_reverse.c
        tsing/1_7sum.c
        tsing/Fibonacci2.c

        tsing/Entry/Entry.h

#        tsing/vector/vector.h
#        tsing/vector/Vector_insert.h
#        tsing/vector/vector_traverse.h
#        tsing/vector/vector_expand.h
#        tsing/vector/vector_remove.h
#        tsing/vector/vector_shrink.h
#        tsing/vector/vector_bracket.h
#        tsing/vector/vector_constructor_by_copying.h
#        tsing/vector/vector_removeInterval.h


        tsing/vector/permute.h
        tsing/vector/vector.h
        tsing/vector/vector_assignment.h
        tsing/vector/vector_bracket.h
        tsing/vector/vector_bubblesort_A.h
        tsing/vector/vector_bubblesort_B.h
        tsing/vector/vector_bubblesort_C.h
        tsing/vector/vector_constructor_by_copying.h
        tsing/vector/Vector_deduplicate.h
        tsing/vector/vector_deduplicate_1.h
        tsing/vector/vector_deduplicate_wrong_1.h
        tsing/vector/vector_expand.h
        tsing/vector/vector_find.h
        tsing/vector/vector_heapSort.h
        tsing/vector/vector_implementation.h
        tsing/vector/Vector_insert.h
        tsing/vector/Vector_merge.h
        tsing/vector/vector_mergeSort.h
        tsing/vector/vector_partition_DUP.h
        tsing/vector/vector_partition_DUP1.h
        tsing/vector/vector_partition_LGU.h
        tsing/vector/vector_partition_LUG.h
        tsing/vector/vector_partition_LUG1.h
        tsing/vector/vector_quickSort_iterative.h
        tsing/vector/vector_quickSort_recursive.h
        tsing/vector/vector_remove.h
        tsing/vector/vector_removeInterval.h
        tsing/vector/Vector_search.h
        tsing/vector/Vector_search_binary_A.h
        tsing/vector/Vector_search_binary_B.h
        tsing/vector/Vector_search_binary_C.h
        tsing/vector/Vector_search_fibonaccian_A.h
        tsing/vector/Vector_search_fibonaccian_B.h
        tsing/vector/vector_selectionsort.h
        tsing/vector/vector_shellSort.h
        tsing/vector/vector_shrink.h
        tsing/vector/vector_sort.h
        tsing/vector/vector_test.h
        tsing/vector/vector_traverse.h
        tsing/vector/Vector_uniquify.h
        tsing/vector/Vector_uniquify_slow.h
        tsing/vector/vector_unsort.h
        
        
        
        
        tsing/04/stack_vector.h
        tsing/queue/queue.h

        tsing/vector/main.cpp
        tsing/list/listnode.h tsing/list/List.h tsing/list/List_traverse.h tsing/03/main.cpp tsing/list/List_insert.h tsing/list/list_destructor.h tsing/list/list_clear.h tsing/list/list_remove.h tsing/list/list_bracket.h tsing/list/List_find.h tsing/list/List_uniquify.h tsing/list/List_deduplicate.h tsing/list/List_serach.h tsing/list/list_initialize.h tsing/list/List_SelectionSort.h _share/comparator.h tsing/list/List_selectMax.h tsing/list/List_insertionsort.h tsing/list/listNode_insertAsSucc.h _share/pm_kr.h tsing/04/convert.h tsing/04/main.cpp tsing/04/nest.cpp tsing/04/nest.h tsing/04/stack_list.h tsing/04/MainList.cpp other/pipe.c kr/07/7.1.c kr/05/e5_2.c kr/05/5_3.c kr/05/5-4.c kr/05/5_61.c tsing/binTree/BinNode.h tsing/binTree/BInNode_insert.h tsing/binTree/main.cpp tsing/binTree/BinNode_macro_BASIC.h tsing/share/release.h tsing/graph/Graph.h


        tsing/binTree/BinNode_travInorder.h
        tsing/binTree/BinNode_TravInorder_I1.h

        tsing/binTree/BinTree.h
        tsing/binTree/BinNode_succ.h
        tsing/binTree/BinNode_macro_AVL.h
        tsing/binTree/BinTree_insert.h tsing/share/double_Elem.h tsing/share/increase_Elem.h tsing/binTree/BinNode_travPreorder.h tsing/binTree/BinNode_TravPreorder_I1.h tsing/binTree/BinTree_updateHeight.h tsing/share/util.h tsing/binTree/BinNode_TravPreorder_I2.h tsing/binTree/BinNode_travlevel.h tsing/queue/main.cpp tsing/BST/BST.h tsing/BST/main.cpp


        tsing/BST/BST_search.h tsing/BST/BST_insert.h
        tsing/BST/BST_remove.h
        tsing/BST/bst_removeAt.h
        tsing/BST/BST_connect34.h
        tsing/AVL/AVL.h tsing/AVL/AVL_macro.h tsing/AVL/AVL_Insert.h tsing/BST/BST_RotateAt.h

        tsing/BTree/BTree.h
        tsing/BTree/BTNode.h
        tsing/BTree/BTree_search.h


        tsing/hashtable/HashTable.h
        tsing/hashtable/HashTable_constructor.h
        tsing/hashtable/HashTable_destructor.h
        tsing/hashtable/HashTable_get.h
        tsing/hashtable/HashTable_hashcode.h
        tsing/hashtable/HashTable_Implementation.h
        tsing/hashtable/HashTable_probe4Free.h
        tsing/hashtable/Hashtable_probe4Hit.h
        tsing/hashtable/HashTable_put.h
        tsing/hashtable/HashTable_rehash.h
        tsing/hashtable/HashTable_remove.h
        tsing/hashtable/HashTable_test.h
        tsing/hashtable/main.cpp

        tsing/UniPrint/print.h
        tsing/UniPrint/print_Entry.h
        tsing/UniPrint/print_HashTable.h
        tsing/Dictionary/Dictionary.h
        tsing/UniPrint/print_basic.cpp


        tsing/BitMap/Bitmap.h
        tsing/BitMap/Bitmap_O1_init.h

        tsing/prime/Eratosthenes.cpp
        tsing/prime/Eratosthenes.h
        tsing/prime/main.cpp
        tsing/prime/primeNLT.cpp
        tsing/prime/primeNLT.h



        tsing/PQ/PQ.h
        tsing/PQ/PQ_Test.cpp

        tsing/PQ_List/PQ_List.h

        tsing/PQ_ComplHeap/PQ_ComplHeap.h
        tsing/PQ_ComplHeap/PQ_ComplHeap_delMax.h
        tsing/PQ_ComplHeap/PQ_ComplHeap_getMax.h
        tsing/PQ_ComplHeap/PQ_ComplHeap_Heapify.h
        tsing/PQ_ComplHeap/PQ_ComplHeap_implementation.h
        tsing/PQ_ComplHeap/PQ_ComplHeap_insert.h
        tsing/PQ_ComplHeap/PQ_ComplHeap_macro.h
        tsing/PQ_ComplHeap/PQ_ComplHeap_percolateDown.h
        tsing/PQ_ComplHeap/PQ_ComplHeap_percolateUp.h

        tsing/string_pm_bf1/pm_brute1.cpp
        tsing/string_pm/string_pm_test.cpp
        tsing/string_pm/string_pm_test.h
        cherno/Log.cpp
        cherno/Log.h
        cherno/Math.cpp
        cherno/main.cpp
        cherno/static.cpp

)



find_library(GMP_LIBRARY NAMES gmp)
find_library(GMPXX_LIBRARY NAMES gmpxx)
include_directories(/usr/local/opt/gmp/include)
link_directories(/usr/local/opt/gmp/lib)
target_link_libraries(datastruct ${GMP_LIBRARY} ${GMPXX_LIBRARY})

