#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int t{};
    ll int a{},b{},c{};
    cin >> t;
    for(ll int u = 0; u < t; u++){
        cin >> a >> b >> c;
        if(((a+b) == c) || ((a + c) == b) || ((b+c) == a)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}