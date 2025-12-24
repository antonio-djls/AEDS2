#include <bits/stdc++.h>
#include <optional>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll int x{};
    cin >> x;
    vector<vector<int>> vi[8][8];


    string ans{};
    while(x--){
        for(ll int  i = 0; i < 64; i++){
                char a{};
                cin >> a;
                if( a !=  '.'){ans+=a;}

        }
        cout << ans << endl;
        ans.clear();
    }
    return 0;
}
