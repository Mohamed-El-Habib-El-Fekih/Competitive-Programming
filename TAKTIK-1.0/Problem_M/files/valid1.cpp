#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    long long sum=0;
    int t=inf.readInt(1,10000,"t");
    inf.readEoln();
    while(t--)
    {
        int n = inf.readInt(1, 200000, "n");
        sum+=n;
        inf.readSpace();
        long long k = inf.readInt(1, 1000000000LL, "k");
        inf.readSpace();
        int y = inf.readInt(0, 1000000000LL, "y");
        inf.readEoln();
        inf.readLongs(n, 0LL, 1000000000LL , "a");
        inf.readEoln();
        inf.readLongs(n, 0LL, 1000000000LL , "b");
        inf.readEoln();
    }
    inf.readEof();
    ensuref(sum<=(int)2e5, "sum of n exceeded 2e5");
}