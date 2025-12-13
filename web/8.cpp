#include<bits/stdc++.h>

using namespace std;

/*
    Implementando Insertion Short

*/

int main(){
    vector<int> vetor = {5,4,3,2,1};
    int i{};
    for(int k = 1; k < vetor.size(); k++){
        int chave  =  vetor[k];
        int i  = k - 1;
        while(i >=0 && vetor[i] > chave){
            swap(vetor[i],vetor[chave]);
            --i;
        }
        chave = k + 1 ;
    }
    for(int n : vetor){
        cout << n << " ";
    }

    return 0;
}