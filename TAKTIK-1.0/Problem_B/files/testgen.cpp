#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv);

    int n = atoi(argv[1]);
    cout << 1 << "\n";
    cout << n << "\n";
    vector<int> p(n);
    iota(p.begin(), p.end(), 1); 
    for (int i=n-1; i>0; --i) {
        int j = rnd.next(0, i); 
        swap(p[i],p[j]);
    }

    for (int i = 0; i < n; i++) {
        cout << (i+1);
        if (i!=(n-1)) cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << p[i];
        if (i!=(n-1)) cout << " ";
    }
    cout << "\n";

    return 0;
}
