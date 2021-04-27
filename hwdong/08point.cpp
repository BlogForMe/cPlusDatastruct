//
// Created by mc on 21-4-26.
//

#if 0

#include <iostream>
using namespace std;
int main(){

    int n = 4;
    int *p = new int[n];
    for (int i = 0; i < n; ++i) {
        p[i] = 2 * i + 1;
    }
    for (int *q = p+n; p <q ; p++)
        cout<< *p<<'\t';
        cout<<'\n';

    char *s = (char *)p;
    char ch = 'A';
    int n2 = n * sizeof(int) / sizeof(char);
    cout<< sizeof(int)<<"  n2   "<<n2<<" "<<sizeof(char)<<endl;

    for (int i = 0; i < n2; ++i) {
        s[i] = ch +i;
    }

    for (char *r = s+n2; s < r; s++) {
        cout<< *s;
    }
    cout<<'\n';
    delete [] p;
}

#endif