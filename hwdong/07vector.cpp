//
// Created by mc on 21-4-26.
//

#include <iostream>
#include <vector>

#if 0

using namespace std;
int main(){
    vector<int> v = {7,5,16,8};
    v.push_back(25);
    v.push_back(13);

    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i]<<'\t';
    }
    cout<<'\n';

    v.pop_back();

    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i]<<'\t';
    }
    cout<<'\n';

    v.resize(2);

    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i]<<'\t';
    }
    cout<<'\n';
}

#endif
