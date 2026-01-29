#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print(vector<int>&a){
    for(int num : a){
        cout << num << " ";
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int t{}; cin >> t;

    while(t--){
        int n{}; cin >> n;
        vector<int> vi(n);
        for(int i = 0; i < n; i++) cin >> vi[i];

        int pos = -1;
        for(int k = 0; k < n; k++){
            if(vi[k] != n - k){
                pos = k; break;
            }
        }

        if(pos == -1){
            print(vi);
            continue;
        }
        int indice = 0;
        for(int k = pos+1; k < n; k++){
            if(vi[k] == n-pos){
                indice = k;
                break;
            }
        }
        reverse(vi.begin()+pos,vi.begin()+indice+1);
        print(vi);
    }

    return 0;
}
