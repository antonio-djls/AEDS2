#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}, size{};
    cin >> x;
    for(ll int u  = 0; u < x; u++){
            cin >> size;
            ll int atual = 0,prox{},count = 0,par = 0,impar =0;
            for(int i  = 0; i < size; i++){
                cin >> count;
                if(count % 2 == 0){par+=count;}
                else impar+=count;
            }
            if(par > impar) {cout <<"YES"<< endl;}
            else cout << "NO" << endl;

    }

    return 0;
}
