#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int n,k;
    cin >> n >> k;
    ll int sum = 240 - k;
    int i  = 1; int somatorio = 0;
    int count  = 0;


    while(true){
        if(sum >= somatorio + 5 *i){somatorio = somatorio + 5 * i; count++;}
        else{break;}
        i++;
    }
    if(count <= n){
        cout << count << endl;
    }else{
        cout << n << endl;
    }
    return 0;
}
