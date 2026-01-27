#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdint>
#define ll long long
using namespace std;

int solve(){

    vector<int> vi;
    int size{},water{}; cin >> size >> water;

    int height =  0;
    int input = 0;
    int sum = 0;
    for(int i = 0; i < size; i++){
        cin >> input; vi.push_back(input);
    }
    int inicio =  0; int limite = 2000000000;
    int nulo = 0;
    while(inicio < limite){
        ll int meio  = inicio + (limite - inicio+1)/2;
        ll int sum  = 0;
        for(int i = 0; i < size; i++){
            sum += max((meio-vi[i]),0ll);
        }
        if(sum <= water) inicio = meio;
        else limite = meio-1;
    }
    return inicio;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int t = 0; cin >> t;

    while(t--){
        cout << solve() << endl;
    }

    return 0;
};
