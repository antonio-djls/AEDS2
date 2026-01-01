#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;

    while(true){
        cout << x << " ";
        if( x == 1) break;
        if(x % 2 == 0){
            x /=2;
        }else{
            x *=3;
            x++;
        }
    }

    return 0;
}
