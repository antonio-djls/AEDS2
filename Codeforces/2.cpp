#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 705 A Hulk
*/
bool eprimo(int x){
    ll int res{};
    for(int i  = 2; i <= x;i++){
        if(x % i == 0){
            res++;
        }
    }
    if(res > 1){
        return false;
    }
    if(res == 1){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{};
    cin >> x;
    vector<string> names = {"I hate that ","I love that ","I hate it ","I love it"};
    for(ll int u = 1; u <= x; u++){
        // cout << u  << x;
        if( u == x){
            if(u % 2 == 0){
                cout << names[3];
            }else{
                cout << names[2];
            }
        }else if( u % 2 == 0){
            cout << names[1];
        }else if(u % 2 != 0){
            cout << names[0];
        }
            
    }
    return 0;
}