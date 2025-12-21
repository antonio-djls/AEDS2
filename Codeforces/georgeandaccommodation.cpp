#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{},a{},b{};
    ll int count{};
    cin >> x;

    for(int i  = 0; i < x; i++){
        cin >> a >> b;
        if((b-a) >= 2) count++;
    }
    cout << count << endl;

    return 0;
}
