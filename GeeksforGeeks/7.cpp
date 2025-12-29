#include <bits/stdc++.h>
#define ll long long
using namespace std;

int custo(vector<int>& a){
    int n = a.size();
    return (n-1) * (*min_element(a.begin(),a.end()));
}
// Custo minimo para retornar o menor valor de um array

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v  = {2,5,7,9};
    cout << custo(v) << endl;
    for(auto num : v){
        cout << num << endl;
    }
    return 0;
}
