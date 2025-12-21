/*
 * Outputs random number between 1 and 10^6, inclusive.
 * To generate different values, call "igen.exe" with different parameters.
 * For example, "igen.exe 1" returns 504077, but "igen.exe 3" returns 808747.
 * 
 * It is typical behaviour of testlib generator to setup randseed by command line.
 */

#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv);
    long long n,k,y;
    n=(int)2e5;
    k=(int)1e9;
    y=rnd.wnext((long long)0,(long long)1000000000, opt<int>(1));
    cout << 1 << "\n";
    cout << n << " " << k << " " << y << "\n";
    vector<long long> b(n);
    for(int i=0;i<n;i++)
    {
        y=rnd.next((long long)0,(long long)1000000000);
        cout << y;
        if(i!=(int)2e5-1)
            cout << " ";
    }
    cout << "\n";
    for(int i=0;i<(int)2e5;i++)
    {
        y=rnd.next((long long)0,(long long)1000000000);
        cout << y;
        if(i!=(int)2e5-1)
            cout << " ";
    }
    cout << "\n";
}