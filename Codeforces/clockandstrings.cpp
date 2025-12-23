#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


void solve(int a, int b, int c, int d){
    vector<int> vi;
    for(int i = 1; i <= 12;i++){
        if(a == i || b == i) vi.push_back(1);
        if(c == i || d  == i) vi.push_back(2);

    }
    if(vi[0] == 1 and vi[1] == 2  and vi[2]== 1 and vi[3] == 2 || vi[0] == 2 and vi[1] == 1 and vi[2] == 2 and vi[3] == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    vi.clear();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int tt{},a,b,c,d;
    cin >> tt;

    while(tt--){
        cin >> a >> b >> c >> d;
        solve(a,b,c,d);
    }
    return 0;
}
