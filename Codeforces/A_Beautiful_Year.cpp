#include <bits/stdc++.h>
#define ll long long
using namespace std;


int converte(const vector<int>& vetor){
        set<int> s(vetor.begin(), vetor.end());
        if (vetor.size() == s.size()) return 1;
        else return 2;
}
vector<int> atualizar(int j){
    vector<int> vetor;
     for(char& c : to_string(j)){
        int  a = c - '0';
        vetor.push_back(a);
    }
    return vetor;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{};
    vector<int> v;

    cin >> x;
    x++;
    while(true){
        v = atualizar(x);
    
        if(converte(v) == 1){
            cout << x << endl;
            return 0;
        }else{
            x++;
        }
    }

    return 0;
}