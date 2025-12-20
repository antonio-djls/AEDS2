#include<iostream>
#include<vector>
using namespace std;
/*
    Introdução ao Greedy Algo
*/


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v = {1,2,5,10,20,50,100,200};
    vector<int> res {};
    long int x{},atual{7};
    cin >> x;
    while(x != 0){
    
        if(x >= v[atual]){
            res.push_back(v[atual]);
            x-=v[atual];
        }else{
            atual--;
        }
    }
    for(auto y : res){
        cout << y << endl;
    }
    return 0;
}