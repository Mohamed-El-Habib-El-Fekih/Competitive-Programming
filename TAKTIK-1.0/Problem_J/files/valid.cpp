#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);

    int t = inf.readInt(1, 100000, "t");
    
    inf.readEoln();
    
    while(t--)
    {
        inf.readLong(2,(long long)1e7,"n");   
        inf.readEoln();
    }
    inf.readEof();
}