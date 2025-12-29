// #include<iostream>
// #include<unordered_map>
// #include<vector>
// #include<algorithm>

// using namespace std;

// vector<vector<int>> contador_de_frequencia(vector<int> & vetor_qualquer){
//     unordered_map<int,int> mp;
//     vector<vector<int>> ans;

//     for(int num : vetor_qualquer){
//         mp[num]++; cout << mp[num] << endl;
//         // cout << mp[num] << endl;
//     }
//     for(auto &it : mp){
//         ans.push_back({it.first,it.second});
//     }

//     cout << "Mostrando os identificadores iguais \n";
//     for(int k = 0; k < ans.size(); k++){
//         cout << "MAP " << mp[k] << " Vetor de resposta " << ans[k][0] << " "  << ans[k][1] << endl;
//     }
//     return ans;
// }


// int main(){
//     vector<int> array = {10,20,10,5,20};
//     vector<vector<int>> resposta = contador_de_frequencia(array);

//     sort(resposta.begin(),resposta.end(),[](vector<int>& a,vector<int>& b){
//         return a[0] < b[0];
//     });
//     for(auto &x: resposta){
//         cout << x[0] << " "<< x[1] << endl;
//     }



//     return 0;
// }

#include<bits/stdc++.h>
#include <unordered_map>

using namespace std;

vector<vector<int>> ordenando(vector<int>& array){
    unordered_map<int, int> mp;
    vector<vector<int>> resposta;

    for(int num : array){
        mp[num]++;
        cout << "Numero do array " << mp[num] << "Numero "<< num << endl;
    }

    for(auto &iterador : mp){
        resposta.push_back({iterador.first,iterador.second});
    }
    return resposta;

}



int main(){
    vector<int> vi = {1,2,2,10,14,22,38,22};

    vector<vector<int>> ans = ordenando(vi);

    sort(ans.begin(),ans.end());

    for(auto &x : ans){
        cout << x[0] <<  " " << x[1] << endl;
    }


    return 0;
}
