#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll int> v;
    ll int x{},res{},count{};
    cin >> x;
    for(int i = 0; i < x; i++){
        ll int a{},b{},c{};
        res = 0;
        cin >> a >> b >> c;
        // cout << a << b << c << endl;
        v.push_back(a);v.push_back(b);v.push_back(c);

        for(ll int num : v){
            if(num == 1){
                // cout << "Incrementei" << num << endl;
                res++;
            }
        }
        if(res >= 2) count++;
        res = 0;
    }
    cout << count << endl;

    return 0;
}