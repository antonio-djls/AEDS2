#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{},size{};
    cin >> x;

    while(x--){
        int input{},maior{},count{};
        cin >> size;
        if(size <= 1){
            cin >> input; if(input == 0) cout << 1 << endl; else cout << 0 << endl;
            continue;
        }
        for(int u  = 0; u < size ; u++){
            cin >> input;
            if(input == 0){
                count++;
            }else{
                if(count > maior) maior = count;
                count = 0;
            }
        }
        if(count > maior)cout << count << endl;
        else cout << maior << endl;
    }
    return 0;
}
