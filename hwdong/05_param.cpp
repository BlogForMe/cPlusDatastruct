//
// Created by mc on 21-4-26.
//

#include <iostream>

using namespace std;

#if 0

void print(char ch,int n =1) {
    for (int i = 0; i < n; ++i) {
        cout<<ch;
    }
}

int main(){
    print('*');cout<<endl;
    print('*',3);cout<<endl;
    print('*',5);cout<<endl;
}
#endif

#if 0

int add(int x,int y = 2, int z=3){
    return x+y+z;
}

int main(){
    cout<< add(5)<<endl;
    cout<<add(5,7)<<endl;
    cout<<add(5,7,9)<<endl;
}

#endif




