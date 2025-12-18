#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll int> v;
    ll int x{};
    cin >> x;
    
    for(ll int u = 0; u < x; u++){
     string input;
        cin >> input;
        for(char c: input){
            if(c != '+'){
                c = c - '0';
                v.push_back(c);
            }
        }
    
        ll  int res = accumulate(v.begin(),v.end(),0);
        cout  << res << endl;
        fill(v.begin(),v.end(),0);
    }
    return 0;
}