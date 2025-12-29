#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{}; cin >> x;
    ll int a,b,c,n;

    while(x--){
        cin >> a >> b >> c >> n;
        ll int sum = (a+b+c+n);
        if(sum % 3 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }


    return 0;
}
