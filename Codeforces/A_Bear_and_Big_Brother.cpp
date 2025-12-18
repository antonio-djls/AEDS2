#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{},y{},count{};
    cin >> x >> y;

    while(true){
        if(x > y){
            // cout  << "0" << endl;
            cout << count << endl;
            break;
        }else{
            x*=3;
            // cout << x << endl;
            // cout << y << endl;
            y*=2;
            count++;
        }
    }

    return 0;
}