#include <bits/stdc++.h>
#define ll long long
using namespace std;

int maximo(vector<int>& vetor){
    int ans  = vetor[0];

    for(int i = 0; i < vetor.size(); i++){
        int atual_soma =  0;

        for(int j = i; j < vetor.size(); j++){
            atual_soma = atual_soma + vetor[j];

            ans = max(atual_soma,ans);
        }
    }
    return ans;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vi = {2,3,-8,7,-1,2,3};
    cout << maximo(vi) << endl;


    return 0;
}
