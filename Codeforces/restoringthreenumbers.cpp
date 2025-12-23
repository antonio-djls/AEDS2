#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll int x ,y,z,w;

    cin >> x  >> y >> z >> w;
    vector<int> vi; vi.push_back(x); vi.push_back(y); vi.push_back(z); vi.push_back(w);
    sort(vi.begin(),vi.end());
    cout << vi[3] - vi[0] << " " << vi[3] - vi[1] << " " << vi[3] - vi[2] << endl;

    return 0;
}
