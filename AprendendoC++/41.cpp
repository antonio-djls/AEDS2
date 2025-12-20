#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v = {1,2,3,4,5};
    auto iterador = partition(v.begin(),v.end(), [] (int x) {return x % 2 == 0;}); // retorna o valor para a segunda partição
    cout  << "índice de partição " << *iterador << endl;

   for(int num : v){
       cout << num << endl;
   }
    return 0;
}
