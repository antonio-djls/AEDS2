#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int price{},budget{},qtd{};
    cin >> price >> budget >> qtd;

    ll int ans = 0;


    for(int i = 1; i <= qtd; i++){
        ans += ( i * price);
    }
    if(budget >= ans){
        cout << 0 << endl;
    }else{
        cout << (ans - budget) << endl;
    }
    return 0;
}
