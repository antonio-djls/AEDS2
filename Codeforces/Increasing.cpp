#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

void ordenar(vector<int>& v){
    sort(v.begin(),v.end());
    // cout << "Vetor ordenado" << endl;
    // for(auto num : v){
    //     cout << num <<" ";
    // }
    // cout << endl;
};

int checar(vector<int> v){
    ll int contador = 0;
    for(int j = 0; j < v.size()-1 ; j++){
        int atual  = v[j];
        int prox = v[(j+1)];
        // cout << v[j]  << " e " << v[j+1]  << endl;
        // if(v[j] + 1 != (v[(j+1)])){
        //     contador++;
        // }
        if(atual == prox){
            contador++;
        }
    }
    if(contador > 0){
        return 1;
    }else{
        return 0;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    vector<int> vi;

    ll int x{},k{},a{},y{};
    ll int count{};
    cin >> x ;

    for(int i = 0;i < x; i++){
        cin >> k;
        for(int j = 0; j < k; j++){
            cin >> y;
            vi.push_back(y);
        }
        ordenar(vi);
        int res = checar(vi);
        if(res == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        vi.clear();
    }

    return 0;
}
