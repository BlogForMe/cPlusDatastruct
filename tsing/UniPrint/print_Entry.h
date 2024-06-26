/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2020. All rights reserved.
 ******************************************************************************************/

#pragma once

#include <Entry.h>
#include "print.h"

/******************************************************************************************
 * Entry
 ******************************************************************************************/
template <typename K, typename V>
void UniPrint::p ( Entry<K, V>& e ) //����
{  printf ( "-<" ); print ( e.key ); printf ( ":" ); print ( e.value ); printf ( ">-" );  }
