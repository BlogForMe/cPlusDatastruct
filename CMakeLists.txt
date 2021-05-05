cmake_minimum_required(VERSION 3.10)
project(datastruct)

set(CMAKE_CXX_STANDARD 11)


include_directories(temple)
include_directories(tsing/02)
include_directories(tsing/chapter02)
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
        temple/main.cpp
        temple/stack.cpp
        temple/stack.h
        tsing/02/main.cpp
        tsing/02/MyVector.cpp
        tsing/02/MyVector.h
        tsing/chapter02/vector.cpp
        tsing/chapter02/vector.h
        tsing/chapter02/vector_main.cpp
        tsing/share/rand.h
        tsing/1_5_reverse.c
        tsing/1_7sum.c
        tsing/Fibonacci2.c
        tsing/03/listnode.h  tsing/03/List.h tsing/03/List_traverse.h tsing/03/main.cpp tsing/03/List_insert.h tsing/03/list_destructor.h tsing/03/list_clear.h tsing/03/list_remove.h tsing/03/list_bracket.h)

