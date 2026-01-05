#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char array[100000];
    ll int x{};
    cin >> x;
    for(ll int  a = 0; a < x; a++){
        cin >> array[a];
    }
    int count{};
    for(ll int a = 0; a < x-1; a++){
        if(array[a] == array[a+1])count++;
    }

    cout << count << endl;
    return 0;
}
