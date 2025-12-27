#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;
    ll int a,b,c,d;
    ll int input{};
    vector<int> vi(4);
    for(int u = 0; u < x; u++){
        cin >> a >> b >> c >> d;
        if( min({a,b}) > max({c,d}) || max({a,b}) < min({c,d}) ){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
