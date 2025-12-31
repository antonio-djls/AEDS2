#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maximo(vector<int>& vetor){
    int resposta = 0;
    int max_temp = vetor[0];

    for(int i = 1; i < vetor.size(); i++){
        max_temp  = max(vetor[i], max_temp + vetor[i]);
        resposta = max(resposta,max_temp);
    }
    return resposta;
}



int main(){
    vector<int> vi = {2,3,-8,7,-1,2,3};

    cout << maximo(vi) << endl;



    return 0;
}
