#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll int> v;
    ll int x{},res{},count{};
    cin >> x;
    for(int i = 0; i < x; i++){
        ll int a{},b{},c{};
        res = 0;
        cin >> a >> b >> c;
        // cout << a << b << c << endl;
        if(a == 1) res++;
        if(b == 1) res++;
        if(c == 1) res++;
        if(res >=2) count++;
    }
    cout << count << endl;

    return 0;
}