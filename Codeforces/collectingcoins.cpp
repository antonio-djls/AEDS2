#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{};
    ll int sum{};
    cin >> x;

    ll int a,b,c,d;

    for(ll int i = 0; i < x; i++){
        cin >> a >> b >> c >> d;
        if(a !=0 || b != 0  || c != 0 || d!= 0){
        if((a+b+c) % 3 == 0  && (a+b+c+d) % 3 == 0) cout  << "YES" << endl;
        else if((a+b+c) % 2 == 0 && (a+b+c+d) % 3 == 0) cout << "YES" << endl;
        else cout<< "NO" << endl;}
    }
    return 0;
}
