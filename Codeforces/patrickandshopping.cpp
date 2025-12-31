#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a{},b{},c{}; cin >> a >> b >> c; vector<int> vi(3);
    vi[0] = a; vi[1] = b; vi[2] = c;
    sort(vi.begin(),vi.end());
    int ans =  min((a+b+c),(2*(vi[0]+ vi[1])));
    cout << ans << endl;
    return 0;
}
