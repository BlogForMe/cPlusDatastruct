//
// Created by mc on 21-5-6.
//
#include <iostream>
#include "../vector/vector_bracket.h"
#include "stack_vector.h"
#include "../vector/vector_traverse.h"
#include "convert.h"
#include "nest.h"

using namespace std;


#if 0


int main() {


    Stack<int> S;
//

//    S.push(1);
//    S.push(1);
//    S.push(3);
//    S.push(6);
//    S.push(7);

//    S.traverse();
//
//    cout<<" S.pop() "<< S.pop()<<endl;
//    cout<<"S.top()  " <<S.top()<<endl;
//
//    for (int i = 0; i < S.size(); ++i) {
//
//        cout<<" "<<S[i];
//    }

//    convert(S,2013,2);
//
//    while(!S.empty()){
//        printf("%d ",S.pop());
//    }

    char cArr[] = {'(','(',')',')'};
    cout<< sizeof(cArr)/ sizeof(char)<<endl;
    cout<<"paren "<< paren(cArr,0, sizeof(cArr)/ sizeof(char))<<endl;

    return 0;
}


#endif