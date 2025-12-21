#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    
    int n = opt<int>("n");
    int n1 = opt<int>("n1");
    string s,s1;
    const char letters[] = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<n;i++)
        s+=letters[rnd.next(0,25)];
    for(int i=0;i<n1;i++)
        s1+=letters[rnd.next(0,25)];
    cout << s << "\n";
    cout << s1 << "\n";
}