#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int a{},b{},c{};
    ll int x{};

    cin >> x;

    for(int u = 0; u < x; u++){
        cin >> a >> b >> c;
        if((a+b) == c){
            cout << "+" << endl;
        }else if((a-b)==c){
            cout << "-" << endl;
        }
    }
    return 0;
}