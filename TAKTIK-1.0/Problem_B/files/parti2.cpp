#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv);
    int n=(int)2e5;
    cout << 1 << "\n";
    cout << n << "\n";
    vector<int> p(n);
    iota(p.begin(), p.end(), 1); 
    for (int i = n-1; i >= 0; i--) {
        cout << (i+1);
        if (i!=0) cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << (i+1);
        if (i!=(n-1)) cout << " ";
    }
    cout << "\n";

    return 0;
}
