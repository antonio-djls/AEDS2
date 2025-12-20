#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v1  = {1,2,3};
    vector<int> v2 = {4,5,6};
    ll int a = inner_product(v1.begin(),v1.end(),v2.begin(),0);
    cout << a << endl;


    // Nesse caso ocorre o produto interno entre cada valor
    // 1*4 + 2*5 + 3*6 = 4 + 10 + 18 = 32

    return 0;
}