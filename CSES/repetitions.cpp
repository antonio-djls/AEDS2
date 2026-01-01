#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;
    char atual = input[0];
    int qtd = 0, maior = 0;
    for(ll int k = 1; k < input.size(); k++){
        if(input[k] == atual){
            qtd++;
        }else{
            atual = input[k];
            if(qtd > maior){
                maior = qtd;
            }
            qtd = 0;
        }
    }
    auto ans = max(qtd,maior);
    cout << ans+1 << endl;
    return 0;
}
