#include<vector>
#include<iostream>

using namespace std;

vector<vector<int>> prefixosum(vector<vector<int>> array){
    int linha = array.size();
    int columns = array[0].size();

    vector<vector<int>> prefixo(linha,vector<int>(columns,0));

    for(int k = 0; k < linha; k++){
        for(int i  = 0; i < columns; i++){
            prefixo[k][i] = array[k][i];
            if(k > 0){
                prefixo[k][i] += prefixo[k-1][i]; //
            }
            if(i > 0){
                prefixo[k][i] += prefixo[k][i-1];
            }
            if(i > 0 &&  k >0){
                prefixo[k][i] -= prefixo[k-1][i-1];
            }
        }
    }

    return prefixo;
}
int main(){

    vector<vector<int>> array = {{1, 2, 3, 4},
                                   {5, 6, 7, 8},
                                   {9, 10, 11, 12},
                                   {13, 14, 15, 16}};


    vector<vector<int>> prefixo = prefixosum(array);


    // printando

    for(int i = 0; i < prefixo.size(); i++){
        for(int k = 0; k < prefixo[0].size(); k++){
            cout << prefixo[i][k] << endl;
        }
        cout << endl;
    }

    return 0;
}
