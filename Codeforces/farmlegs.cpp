#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{},input{}; cin >> x;

    while(x--){
        cin >> input;
        if(input % 2 != 0) cout << 0 << endl;
        else cout << (input/4) + 1 << endl;
    }

    return 0;
}
