#include <bits/stdc++.h>
#include <climits>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input{};int x{}; int tamanho{}; cin >> x; cin >> tamanho; cin >> input;

    vector<int> vi;
    set<int> si;
    int i = 0;
    for(int k = 65; k <= (64+tamanho); k++){
        si.insert(k);
    }
    for(int k = 0; k < input.size(); k++){
        i =  int(input[k]);
        vi.push_back(i);
    }

    int menor = INT_MAX;
    for(int num : si){
        auto ans = count(vi.begin(),vi.end(),num);
        if(ans < menor){
            menor = ans;
        }
    }
    cout << (menor * tamanho) << endl;
    return 0;}
