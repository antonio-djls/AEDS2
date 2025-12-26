#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int n, k, l, c, d, p, nl, np;

    cin>> n >> k >> l >> c >> d >> p >> nl >> np;
    // Necessário - n * l  + n * p (sal)
    // p = gramas de sal encontradas
    if(n ==  1){
        ll int litros_totais = k * l;
        ll int pedacos_limao = c * d ;
        ll int x = litros_totais;
        // cout << x << endl;
        ll int y  = pedacos_limao;
        ll int z = p/np; ll int ans = (min({x,y,z}) )/ n;  cout << ans << endl;
    }else{
        ll int litros_totais = k * l;
        ll int pedacos_limao = c * d ;
        ll int x = (litros_totais - (litros_totais % n))/n;
        // cout << x << endl;
        ll int y  = pedacos_limao;
        ll int z = p/np;

        ll int ans = (min({x,y,z}))/ n;
        cout << ans << endl;
    }


    return 0;
}
