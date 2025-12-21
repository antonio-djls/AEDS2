#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    ll int a{},b{},c{},d{};
    cin >> x;
    for(int u = 0; u < x; u++){
        cin >> a >> b >> c >> d;

        if((a==b) && (c==d) && (a==c)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
