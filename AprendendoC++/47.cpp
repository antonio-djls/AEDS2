#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vi  = {1,2,3,4,5};
    vector<int> vi2 = {10,20,30,40,50};

    ll int length   = vi.size();
    vector<int> ans(length);

    transform(vi.begin(),vi.end(),vi2.begin(),ans.begin(),plus<int>{});
    transform(vi.begin(),vi.end(),ans.begin(),[] (int x) {return x *2;});

    for(int k : ans){
        cout << k << endl;
    }
    return 0;
}
