#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;
    string input;
    while(x--){
        cin >> input;
        if((input[0]== 'Y' || input[0] == 'y') && (input[1] == 'E' || input[1] == 'e') && (input[2] == 'S' || input[2] == 's')){
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }

    return 0;
}
