#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool procurar(vector<int>& vi, int valor){

    for(int i = 0; i < vi.size(); i++){
        if(vi[i] == valor){
            cout << "Número encontrado " << vi[i] << endl;
            return true;
        }
    }
    return false;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> vetor = {1,2,3,4,5};
    int x{}; cin >> x;
    procurar(vetor,x);

    return 0;
}
