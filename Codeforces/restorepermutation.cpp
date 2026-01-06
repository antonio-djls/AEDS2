#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;
    int size{},input{};

    set<int> si;
    vector<int> ans;

    while(x--){
        cin >> size;

        for(int k = 0; k < size; k++){
            cin >> input;
            auto res = si.insert(input);
            if(res.second){
                ans.push_back(input);
            }
        }
        for(int k = 0; k < ans.size(); k++){
            cout << ans[k] << " ";
        }
        cout << endl; ans.clear(); si.clear();
    }
    return 0;
}
