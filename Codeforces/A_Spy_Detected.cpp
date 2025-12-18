 #include <bits/stdc++.h>
 #define ll long long
 using namespace std;

int procurando(vector<int>& vetor){
    ll int freq{},escolhido{},res{};
    for(int u = 0; u < vetor.size(); u++){
        freq = 0;
        for(int k = 0; k < vetor.size(); k++){
                if(vetor[u] == vetor[k]) freq++;
        }
    
    if(freq <= 1) escolhido = vetor[u];
    }
    // cout << endl;
    // cout << "Escolhido " << escolhido << endl;
    for(int k = 0; k < vetor.size(); k++){
        // cout << "Valor de K " << k << endl;
        if(escolhido == vetor[k]) return k +1;
    }
    // return (escolhido + 1);
    return 25;
};
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{},inputs{},a{};
    vector<int> v;
    cin  >> x;
    for(int u  = 0; u < x; u++){
        cin >> inputs;
        for(int i = 0;  i < inputs;i++){
            ll int k{};
            cin >> k;
            v.push_back(k);
        }
        int indice = procurando(v);
        v.clear();
        cout << indice  << endl;
    }
 
     return 0;
 }