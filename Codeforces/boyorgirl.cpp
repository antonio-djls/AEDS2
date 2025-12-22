#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input{};
    vector<int> vi;
    cin >> input;

    for(char& ch : input){
        vi.push_back(((int)ch));
    }
    sort(vi.begin(),vi.end());
    set<int> s{vi.begin(),vi.end()};
    ll int ans{};
    for(int i = 0; i < s.size();i++){
        ans++;
    }
    if(ans % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;


    return 0;
}
