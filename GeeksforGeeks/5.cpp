#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int capacity = 50;

    pair<int,int> p; int aux; vector<int> vi;
    for(int i = 0; i < 3; i++){
        int ratio  = val[0]/wt[0];
        vi.push_back(ratio);
    }
    auto ans = max_element(vi.begin(),vi.end());
    cout << *ans << endl;
    int wt{};
    while( wt < 50){


    }

    return 0;
}
