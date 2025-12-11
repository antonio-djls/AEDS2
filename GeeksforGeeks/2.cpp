#include<iostream>
#include<string>
#include<algorithm>
#define  ll long long int

using namespace std;
int main(){
    string numeros;
    ll x{}, contador{1};
    cin >> x;

    for(int u = 0; u < x; u++){
        for(int k = 0; k < u; k++){
            numeros = to_string(contador);
            ++contador;
            // if(u == k) cout << endl;
        }
        cout << endl;
    }

    return 0;
}