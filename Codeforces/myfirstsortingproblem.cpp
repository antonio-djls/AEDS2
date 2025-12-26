#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int a,b,x;
    cin >> x;

    while(x > 0){
        cin >>  a >> b;

        if(a > b){
            cout << b <<  " " << a << endl;
        }else{
            cout << a << " " << b << endl;
        }
    x--;
    }



    return 0;
}
