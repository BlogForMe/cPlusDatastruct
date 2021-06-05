//
// Created by mc on 21-6-5.
//

#ifndef DATASTRUCT_UTIL_H
#define DATASTRUCT_UTIL_H
/******************************************************************************************
 * 测试、演示用小工具
 ******************************************************************************************/
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <typeinfo>

#include "double_Elem.h"
#include "increase_Elem.h"

#include "rand.h" //随机数

#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))

#if defined(DSA_DEBUG) //编译开关，控制调试输出
#define DSA(x)  { x } //输出
#else
#define DSA(x) //不输出
#endif


#endif //DATASTRUCT_UTIL_H
