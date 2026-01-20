#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);    cin.tie(nullptr);

    ll int x{}; cin >> x;
    ll int y  = x;
    if(x < 10){
        cout << 1 << endl; return 0;
    }else{
        int count = 0; int ultimo = 0;
        // vector<int> vi;s
        while(x > 0){
            // cout << x % 10<< endl;
            ultimo = x % 10;
            x/=10;
            count++;
        }
        ultimo++;
        int ans = pow(10,count-1);
        cout << ans * ultimo-y << endl;
    }


    return 0;
}
