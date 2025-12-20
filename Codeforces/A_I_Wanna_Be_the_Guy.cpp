#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll int limit{},a{};
    vector<int> v;
    // vector<int> vi;


    cin >> limit;
    for(int i = 0; i < (limit * 2); i++){
        cin >> a;
        v.push_back(a);
    }
    set<int> s(v.begin(),v.end());
    vector<int> vi(s.begin(),s.end());

    
    if(vi[0] == 0){
        if(vi.size() - 1 == limit){
            cout << "I become the guy." << endl;
        }
        if(vi.size() == 1){
            cout << "Oh, my keyboard!"<< endl;
        }
    }else{
        if(vi.size() == limit){
        cout << "I become the guy." << endl;
     }else{
        cout << "Oh, my keyboard!" << endl;
     }
    }
    
    return 0;
}