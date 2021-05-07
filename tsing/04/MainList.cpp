//
// Created by mc on 21-5-7.
//


#include "stack_list.h"
#include "../list/List_traverse.h"
#include "../list/list_bracket.h"

int main() {


    Stack<int> S;

    S.push(1);
    S.push(1);
    S.push(3);
    S.push(6);
    S.push(7);

    S.traverse();

    cout<<" S.pop() "<< S.pop()<<endl;
    cout<<"S.top()  " <<S.top()<<endl;

    for (int i = 0; i < S.size(); ++i) {

        cout<<" "<<S[i];
    }

}