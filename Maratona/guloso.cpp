#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n{}; cin >> n;

    vector<int> fat(11);

    fat[0] = 1;

    for(int i = 1;i <=10; i++){
        fat[i] = fat[i-1]*i;
        cout << fat[i] << " "; if(i >= 5) cout << endl;
    }

    int ans = 0;

    for(int i = 10; i > 0; i--){
        int at  = n/fat[i]; if(at != 0){
            cout << at << " " <<  n  << "/" << fat[i] << endl;
        }
        ans += at;
        n -= at*fat[i];
    }

    cout << ans << endl;
    return 0;
}
