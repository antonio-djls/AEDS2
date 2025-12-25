#include <bits/stdc++.h>
#include <vector>
#include<set>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int a,b,c,d,count{};
    vector<int> vi;

    cin >> a >> b >> c >> d; vi.push_back(a); vi.push_back(b); vi.push_back(c); vi.push_back(d);
    set<int> conj(vi.begin(),vi.end());
    cout << vi.size() - conj.size() << endl;
    // for(int u = 0; u < vi.size(); u++){
    //     for(int k = u + 1; k < vi.size(); k++){
    //         if(vi[u] == vi [k]){count++;}
    //     }
    // }




    return 0;
}
