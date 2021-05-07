//
// Created by mc on 21-5-6.
//
#include <iostream>
#include "../vector/vector_bracket.h"
#include "stack_vector.h"

using namespace std;


#if 1


int main() {


    Stack<int> S;
//
//    convert(S,20,2);

    S.push(1);
    S.push(1);
    S.push(3);
    S.push(6);
    S.push(7);

    S.pop();
//    cout<<" S.pop() "<< <<endl;
//    cout<<"S.top()  " <<S.top()<<endl;

    for (int i = 0; i < S.size(); ++i) {

        cout<<" "<<S[i];
    }
    return 0;
}


#endif