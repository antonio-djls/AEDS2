#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    ll int a{},b{},c{};
    cin >> x;

    while(x--){

        cin >> a >> b >> c;

        int x = abs(a-b); int y = abs(b-c); int j = abs(b-b);
        int ans = x + y + j;

        cout << ans << endl;


    }
    return 0;
}
