#include <bits/stdc++.h>
#include<numeric>

#define ll long lsong
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v1(5);
    iota(v1.begin(),v1.end(),1); // complementa o vetor do início ao fim, sendo o fim o valor 5 que setei na criação do vetor

    for(int num : v1){
        cout << num << endl;
    }
    return 0;
}
