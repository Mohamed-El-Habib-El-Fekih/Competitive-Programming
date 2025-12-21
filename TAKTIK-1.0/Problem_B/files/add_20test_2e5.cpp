#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv);

    cout << 2 << "\n";
    int ran;
    vector<int> arr((int)2e5);
    iota(arr.begin(), arr.end(), 1);
    for(int i=0;i<2;i++)
    {
        cout << (int)2e5 << "\n";
        ran=rnd.next(1,(int)2e5);
        mt19937 g1(ran);
        shuffle(arr.begin(), arr.end(), g1);
        for(int j=0;j<arr.size();j++)
        {
            cout << arr[j]; 
            if(j!=arr.size()-1)
                cout << " ";
        }
        cout << "\n";
        ran=rnd.next(1,(int)2e5);
        mt19937 g2(ran);
        shuffle(arr.begin(), arr.end(), g2);
        for(int j=0;j<arr.size();j++)
        {
            cout << arr[j]; 
            if(j!=arr.size()-1)
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
