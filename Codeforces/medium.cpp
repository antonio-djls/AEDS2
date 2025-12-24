#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll int x{};

    cin >> x;

    while(x--){
        ll int a{},b{},c{};
        cin >> a >> b >> c;
        vector<ll int> vi; vi.push_back(a); vi.push_back(b); vi.push_back(c); sort(vi.begin(),vi.end());
        cout << vi[1] << endl;
        vi.clear();
    }

    return 0;
}
