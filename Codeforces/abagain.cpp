#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{},sum{};
    cin >> x;
    string a;
    while(x--){
        cin >> a; sum = (a[0] - '0') + (a[1]-'0');
        cout << sum << endl;
    }

    return 0;
}
