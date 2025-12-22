
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};

    cin >> x;
    for(int i = 0; i < x; i++){
        ll int a,b;
        cin >> a >> b;
        ll int prev = 0, ans = 0;
        for(int u = 0; u < a; u++){
            ll int k{};cin >> k;
            ans =  max(ans, k - prev);
            prev = k;
        }
        ans =  max(ans, 2 * (b - prev));
        cout << ans << endl;
    }

    return 0;
}
