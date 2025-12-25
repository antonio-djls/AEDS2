#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}, input{},sum{};
    cin >> x;

   for(ll int u = 0; u < x; u++){
       cin >> input;
       ll int teste = sum,count = 0;
       while(teste >= input){
           if(teste >= input) { teste -=input; count++;}
           else{break;}
       }
       sum += input;
       cout << count + 1 << endl;
   }


    return 0;
}
