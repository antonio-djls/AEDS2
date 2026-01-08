#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;
    ll int a{},b{},ans{};
    while(x--){
        cin >> a >> b;
        ans = abs(a-b);
        int count  = (ans +9)/10;

        cout << count << endl;
    }


    return 0;
}
