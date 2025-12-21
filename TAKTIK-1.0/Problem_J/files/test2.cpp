#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv);

    long long nbr=stoll(argv[1]);
    int t=1e5;    
    cout << t << "\n";
    while(t--)
    {
        cout << nbr-- << "\n";
    }
    return 0;
}
