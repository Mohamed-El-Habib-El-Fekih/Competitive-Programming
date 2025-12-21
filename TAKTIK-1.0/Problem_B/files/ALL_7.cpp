#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv);
    vector<int> a = {1, 2, 3, 4, 5 , 6 , 7}, b= {1, 5, 2, 4, 3 ,6 , 7};
    cout << 5040 << "\n";
    do {
        cout << 7 << "\n";
        for (int x=0;x<a.size();x++) 
        {
            cout << a[x];
            if(x!=a.size()-1)
                cout << " ";
        }
        cout << "\n";
        for (int x=0;x<b.size();x++) 
        {
            cout << b[x];
            if(x!=b.size()-1)
                cout << " ";
        }
        cout << "\n";
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}
