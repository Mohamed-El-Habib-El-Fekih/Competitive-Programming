#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv);
    vector<int> a = {1, 2, 3, 4, 5 , 6 , 7, 8 , 9}, b= {1, 5, 8, 2 , 9, 4, 3 ,6 , 7};
    cout << 44444 << "\n";
    int t=44444;
    while(t--)
    {
        cout << 9 << "\n";
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
        next_permutation(a.begin(), a.end());
    }
    return 0;
}
