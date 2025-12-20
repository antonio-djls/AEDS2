#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v = {2,4,6,8};
    vector<int> res = {2};
    auto it = adjacent_difference(v.begin(),v.end(),res.begin());
    // Recebe como retorno da função um iterador que vai para o fim do vetor
    for(auto i = res.begin(); i != it; i++){
        cout << *i << endl;
    }
    return 0;
}