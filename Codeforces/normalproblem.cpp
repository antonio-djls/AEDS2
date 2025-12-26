#include <bits/stdc++.h>
#define ll long long
using namespace std;



/*
B. Normal Problem
time limit per test1 second
memory limit per test256 megabytes
A string consisting of only characters 'p', 'q', and 'w' is painted on a glass window of a store. Ship walks past the store, standing directly in front of the glass window, and observes string a
. Ship then heads inside the store, looks directly at the same glass window, and observes string b
.

Ship gives you string a
. Your job is to find and output b
.

Input
The first line contains an integer t
 (1≤t≤100
) — the number of test cases.

The only line of each test case contains a string a
 (1≤|a|≤100
) — the string Ship observes from outside the store. It is guaranteed that a
 only contains characters 'p', 'q', and 'w'.

Output
For each test case, output string b
, the string Ship observes from inside the store, on a new line.
 */
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{};
    cin >> x;

    string input;
    cout << endl;
    for(ll int  u  = 0; u < x ;u++){
        cin >> input;
        reverse(input.begin(),input.end());
        for(int i  = 0; i < input.size(); i++){
            if(input[i] == 'q') input[i] = 'p';
            else if(input[i] == 'p')input[i] = 'q';
            // else cout << input[i];
        }
        cout << input << endl;
    }


    return 0;
}
