#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int t = 0; cin >> t;
    vector<int> vi(2*t);
    for(int i = 0; i < 2*t; i++){cin >> vi[i];}
    set<int>si(vi.begin(),vi.end());
    // cout << "Mostrando  o set";
    // for(int num : si){
    //     cout << num ;
    // } cout  << endl;
    int qtd_necessario =  (t)-2/2;
    // cout << "tamanho de ambos " << si.size() << " "  << vi.size();
    if(si.size() != vi.size()){
        // cout << "pass";
            int dif = vi.size() - si.size();
            qtd_necessario -= dif;
    }
    cout << "necessario" << qtd_necessario << endl;
    vector<int> ans;
    vector<int> repetidos;
    for(int i = 0; i < vi.size()-1; i++){
        for(int j = vi.size()-1; j > 0; j--){
            int diferenca = abs(vi[i]-vi[j]);
            if(diferenca == 0){
                repetidos.push_back(vi[i]);
            }
            if(diferenca != 0 && find(repetidos.begin(), repetidos.end(), vi[i]) == repetidos.end()){

                // cout << "dif " << diferenca << endl;
                ans.push_back(diferenca);
            }
        }
    }
    sort(ans.begin(),ans.end());
    ll int sum = 0;
    for(int k = 0; k < qtd_necessario; k++){
        sum += ans[k];
        cout << ans[k] << endl;
    }
    cout << sum << endl;


    return 0;
}
