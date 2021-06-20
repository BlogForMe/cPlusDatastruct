#pragma once

#include "Hashtable_probe4Hit.h"
#include "HashTable_rehash.h"
#include "HashTable_probe4Free.h"

template <typename K, typename V> bool Hashtable<K, V>::put( K k, V v ) { //散列表词条插入
    if ( ht[ probe4Hit( k ) ] ) return false; //雷同元素不必重复插入
    int r = probe4Free( k ); //为新词条找个空桶（只要装填因子控制得当，必然成功）
    ht[ r ] = new Entry<K, V>( k, v ); ++N; //插入
    if ( removed->test( r ) ) { removed->clear( r ); --L; } //懒惰删除标记
    if ( (N + L)*2 > M ) rehash(); //若装填因子高于50%，重散列
    return true;
}