#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    // auto start = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 0; cin >> t;

    while(t--){
        int jogadores{},num_cartas{}; cin >> jogadores >> num_cartas;
        vector<vector<ll int>> vi(jogadores,vector<ll int>(num_cartas));
        vector<ll int> coluna(jogadores);
        for(int i = 0; i < jogadores; i++){
            for(int j = 0; j < num_cartas; j++){
                cin >> vi[i][j];
            }
        }



        ll int total = 0;
        for(int i = 0; i < num_cartas; i++){
            for(int j = 0; j < jogadores; j++){
                coluna[j] = vi[j][i];
            }
            sort(coluna.begin(),coluna.end());
            ll int sum = 0, anterior = 0;
            for(int k = 0; k < jogadores; k++){
                sum += coluna[k] * k - anterior;
                anterior += coluna[k];
            }
            total += sum;
        }
        cout  << total << endl;

    }




    // auto end = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    // std::cout << "Execution time: " << duration.count() << " ms\n";
    return 0;
}
