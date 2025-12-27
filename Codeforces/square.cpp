#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    int a,b;
    vector<pair<int,int>> vi;
    pair<int,int> input;
    cin >> x;
    while(x--){
        for(int  u = 0; u < 4; u++){
        cin >> a >> b; input.first = a; input.second = b; vi.push_back(input);}

        for(int s = 0; s < vi.size(); s++){
            if(vi[s].first != vi[s+1].first){
                int ans = abs(vi[s].first - vi[s+1].first);
                ans = ans*ans;
                cout << ans << endl; vi.clear();
                break;
            }
        }



    }


    return 0;
}
