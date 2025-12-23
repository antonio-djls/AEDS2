#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{};
    vector<int>vi;
    cin >> x;

    for(int k = 0; k < x; k++){
        ll int a{}, input{};
        cin  >> a;
        ll int ans{-1};
        for(int i = 0; i < a; i++){
            cin >> input;
            vi.push_back(input);
        }
        sort(vi.begin(),vi.end());
        if(vi.size() < 3){ ans =  -1;}
        else{
            for(int d = 0; d < vi.size() - 2; d++){
                if(vi[d] == vi[d+1] and vi[d+1] == vi[d+2]){ ans = vi[d];}
            }
        }
        vi.clear();
        cout  << ans << endl;
    }

    return 0;
}
