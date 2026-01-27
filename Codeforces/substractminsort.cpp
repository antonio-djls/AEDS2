#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int t{}; cin >> t;
    int size{};

    while(t--){
        cin >> size;
        vector<int> vi(size);
        for(int k = 0; k < vi.size(); k++){cin >> vi[k];}
        bool ans = is_sorted(vi.begin(),vi.end());

        if(ans){
            cout << "YES" << endl;
            continue;
        }else{
            for(int k = 0; k < size-1; k++){
                ll int minimo = min(vi[k],vi[k+1]);
                vi[k] -= minimo;
                vi[k+1] -= minimo;
            }
            ans = is_sorted(vi.begin(),vi.end());

            if(ans){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
