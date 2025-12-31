#include <bits/stdc++.h>
#include <climits>
#define ll long long
using namespace std;

vector<int> convert(vector<int>& vetor){
    int size = vetor.size();
    vector<int> resultado(size);

    int atual = 0;

    for(int  k = 0; k < size; k++){
        int minimo = INT_MAX;
        int indice {};
        for(int  j = 0; j < size; j++){
            if(minimo > vetor[j]){
                minimo =  vetor[j];
                indice = j;
            }
        }
        resultado[indice] = atual;
        vetor[indice] = INT_MAX;
        atual++;
    }
    return resultado;
}
void printavetor(vector<int>& vetor){
    for(auto num : vetor){
        cout << num << " ";
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> array = {10,20,15,12,11,50};

    cout << "Array enviado " << endl;
    printavetor(array);
    vector<int> ans = convert(array);

    cout << "Array convertido" << endl;
    printavetor(ans);


    return 0;
}
