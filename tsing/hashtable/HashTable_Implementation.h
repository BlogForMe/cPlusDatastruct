/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2020. All rights reserved.
 ******************************************************************************************/

#pragma once

/******************************************************************************************
 * 将Hashtable各方法的实现部分，简洁地引入Hashtable.h
 * 效果等同于将这些实现直接汇入Hashtable.h
 * 在export尚未被编译器支持前，如此可将定义与实现分离，以便课程讲解
 ******************************************************************************************/
#define PRIME_TABLE "/home/mc/CLionProjects/datastruct/tsing/_input/prime-1048576-bitmap.txt"

#include "Hashtable_probe4Hit.h"
