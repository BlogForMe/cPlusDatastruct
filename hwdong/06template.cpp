//
// Created by mc on 21-4-26.
// 函数模板
//

#include <iostream>

using namespace std;

template<typename  T>
T add(T x,T y){
    return  x+y;
}

#if 0
int main(){

    cout<<add<int>(5,3)<<endl;
    cout<<add<double >(5.3,7.8)<<endl;
    cout<<add<int>(4,6)<<endl;
    cout<<add<string>("hello","world")<<endl;
//#else
    //自动类型推断
    cout<<add(5,3)<<endl;
    cout<<add(5.3,7.8)<<endl;
    cout<<add(4,6)<<endl;
    cout<<add((double)5,7.8)<<endl;
}
#endif