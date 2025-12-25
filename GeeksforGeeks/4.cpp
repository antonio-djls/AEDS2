#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> coins = {1, 2, 5, 10};

    int amount =  39;
    int t = 3,coin = 0;
    while(amount > 0){
        if(amount >= coins[t]){
            int qtd = (amount / coins[t]); cout << qtd << endl;
            amount -= qtd * coins[t];
            coin+=qtd;
            t--;
        }
    }
    cout << coin << endl;



    return 0;
}
