#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int t = inf.readInt(1, (int)4e5, "t");
    long long count=0;
    inf.readEoln();
    while(t--)
    {
        int n = inf.readInt(1, (int)2e5, "n");
        count+=n;
        inf.readEoln();
    
        vector<int> a=inf.readInts(n,1,n,"a");
        inf.readEoln();
        vector<int> b=inf.readInts(n,1,n,"b");
        inf.readEoln();
        set<int> se;
        for(int i=0;i<n;i++)
            se.insert(a[i]);
        ensuref(se.size()==n, "array A is not a permutation");
        se.clear();
        for(int i=0;i<n;i++)
            se.insert(b[i]);
        ensuref(se.size()==n, "array B is not a permutation");
    }
    ensuref(count<=(int)4e5, "sum of n exceeded 4e5");
    inf.readEof();
}
