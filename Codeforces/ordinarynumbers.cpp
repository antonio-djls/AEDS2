#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{},input{}; cin >> x;

    while(x--){
        cin >> input;
        int ans{};
        for(ll int k  = 1; k <= input; k =(k * 10) + 1){
            for(int u = 1; u <= 9; u++){
                if(k * u <= input){
                    ans++;
                }
            }
        }
        cout << ans << endl;


    }

    return 0;
}
