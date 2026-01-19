#include <bits/stdc++.h>
#include <utility>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, int>> vi; pair<int,int> input;

    ll int force{},num{}; cin >> force >> num;
    ll int force_dois = force;

    for(int k = 0; k < num; k++){
        cin >> input.first >> input.second; vi.push_back(input);
    }
    sort(vi.begin(),vi.end());
    int c1{};
    for(int k = 0; k < vi.size(); k++){
        if(force > vi[k].first){
            force += vi[k].second; c1++;
        }

    }
    if(c1 == num){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


    return 0;
}
