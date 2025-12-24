#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;
    ll int saldo{},a{},count{};

    for(int i = 0; i < x; i++){
        cin >> a;
        if(a  == -1){
            if(saldo > 0){saldo--;}
            else{count++;}
            }else{saldo+=a;}
    }
    cout << count << endl;

    return 0;
}
