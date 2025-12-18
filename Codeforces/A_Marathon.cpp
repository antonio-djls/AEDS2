#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{},count{};
    vector<ll int> v;
    cin >> x;
    for(ll int u = 0; u < x; u++){
        ll int a{},b{},c{},d{};
        count = 0;
        cin >> a >> b >> c >> d;
        if(b > a) count++;
        if(c > a) count++;
        if(d > a) count++; 
        cout << count << endl;
    }

    return 0;
}