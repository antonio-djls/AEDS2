#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;

    while(x--){
        ll int a{},b{};
        cin >> a >> b;
        if(a % b ==  0 || a % 2 == 0 || (a % b) % 2 == 0 || (a-b) % 2  == 0 ){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
