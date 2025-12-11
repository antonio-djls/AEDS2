#include<bits/stdc++.h>
#include<iostream>

#define ll long long int
using namespace std;


int main(){
    ll x{},a{},b{},res{},cont{1};
    cin >> x;
    for(int k = 0; k < x; k++){
        cin >> a >> b;
        if( b == 1){
            cout << a*b << endl;
        }else{
            res = 0;
            cont = 1;
            while(true){
                if((b % cont) == 0){
                    res = cont;
                    break;
                }
                cont++;
                cout << "Mostrando o contador " << endl;
            }
            cout << res << endl;
        }
    }


    return 0;
}