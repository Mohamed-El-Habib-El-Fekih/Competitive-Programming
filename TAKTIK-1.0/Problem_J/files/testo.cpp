#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv);

    long long t = stoll(argv[1]);
    cout << t << "\n";
    while(t--)
    {
        long long val=rnd.wnext((long long)2,(long long)1e7, opt<int>(1));
        cout << val << "\n";
    }
    return 0;
}
