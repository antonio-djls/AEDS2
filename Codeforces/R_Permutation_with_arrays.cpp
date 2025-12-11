#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#define ll long long 
using namespace std;

int main(){
    ll int x {},j{};
    string linha;
    vector<ll int> vetor;
    vector<ll int> vetor_dois;
    cin >> x;
    cin.ignore();
    getline(cin,linha);
    stringstream ss(linha);
    
    while(ss >> j){
        vetor.push_back(j);
    }
    getline(cin,linha);
    stringstream ss1(linha);
    while(ss1 >> j){
        vetor_dois.push_back(j);
    }
    if(vetor.size()!= vetor_dois.size()){
        // cout << "no" << endl;
        return 0;
    }
    ll int sum{}, sum2{};
    for(ll int i = 0; i < vetor.size(); i++){
        sum += vetor.at(i);
        sum2 += vetor_dois.at(i);
    }
    // cout  << sum << " " << sum2;
    if(sum == sum2){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}