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
    cout << 1 << "\n";
    n=rnd.next(1,(int)2e5);
    k=(int)2e5;
    y=rnd.next((long long)0,(long long)1e9);
    vector<long long> b(n);
    cout << n << " " << k << " " << y << "\n";
    for(int i=0;i<n;i++)
    {
        b[i]=rnd.next((long long)0,(long long)2e5);
        cout << b[i]+2*k;
        if(i!=n-1)
            cout << " ";
    }
    cout << "\n";
    for(int i=n-1;i>=0;i--)
    {
        cout << b[i];
        if(i!=0)
            cout << " ";
    }
    cout << "\n";
}