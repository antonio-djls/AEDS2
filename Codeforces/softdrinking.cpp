#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, l, c, d, p, nl, np;

    cin>> n >> k >> l >> c >> d >> p >> nl >> np;
    // Necessário - n * l  + n * p (sal)
    // p = gramas de sal encontradas

    int resposta = ((k*l)/ nl);
    int ans = c*d;

    int toast = p / np;
    // cout << "P" << p <<  endl << "np" << np << endl;
    // cout << "toast" << toast << endl;
    resposta = min({resposta,ans,toast});
    cout << resposta/n << endl;

    return 0;
}
