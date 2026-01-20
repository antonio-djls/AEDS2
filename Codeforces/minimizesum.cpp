#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;

    while(x--){
        int qtd = 0,input = 0; vector<int> vi;
        cin >> qtd;
        for(int i = 0; i < qtd; i++){
            cin >> input; vi.push_back(input);
        }
        ll int sum = 0;
        for(int i = 0; i < qtd-1; i++){
            auto ans = min(vi[i+1],vi[i]);
            vi[i] += ans;
        }
        cout << *min(vi.begin(),vi.end()) << endl;
        vi.clear();
    }

    return 0;
}
