#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int t{}; cin >> t;

    while(t--){
        int count = 0; cin >> count;

        vector<int>vi(count);
        ll int sum = 0;
        for(int i = 0; i < count; i++){
            cin >> vi[i];
            sum += vi[i];
        }
        if(sum % 2 != 0){
            cout << "YES" << endl;
        }else{
            int par{},impar{};
            for(int i = 0; i < count; i++){
                if(vi[i] == 1 or vi[i] % 2 != 0) impar++;
                else par++;
            }
            if(impar != 0 and par != 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }

        }

    }

    return 0;
}
