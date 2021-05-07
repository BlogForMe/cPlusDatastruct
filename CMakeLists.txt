cmake_minimum_required(VERSION 3.10)
project(datastruct)

set(CMAKE_CXX_STANDARD 11)


include_directories(tsing/02)
include_directories(tsing/share)

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


        tsing/vector/vector.h
        tsing/vector/Vector_insert.h
        tsing/vector/vector_remove.h
        tsing/vector/vector_traverse.h
        tsing/vector/vector_expand.h
        tsing/vector/vector_remove.h
        tsing/vector/vector_shrink.h
        tsing/vector/vector_bracket.h
        tsing/vector/vector_constructor_by_copying.h
        tsing/vector/vector_removeInterval.h
        tsing/04/stack_vector.h

        tsing/vector/main.cpp
        tsing/03/listnode.h  tsing/03/List.h tsing/03/List_traverse.h tsing/03/main.cpp tsing/03/List_insert.h tsing/03/list_destructor.h tsing/03/list_clear.h tsing/03/list_remove.h tsing/03/list_bracket.h tsing/03/List_find.h tsing/03/List_uniquify.h tsing/03/List_deduplicate.h tsing/03/List_serach.h tsing/03/list_initialize.h tsing/03/List_SelectionSort.h _share/comparator.h tsing/03/List_selectMax.h tsing/03/List_insertionsort.h tsing/03/listNode_insertAsSucc.h _share/pm_kr.h tsing/04/convert.h tsing/04/main.cpp )



