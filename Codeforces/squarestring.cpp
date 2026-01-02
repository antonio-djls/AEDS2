#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string input){

    if(input.size() == 1 || input.size() % 2 != 0){
        cout << "NO" << endl;
        return;
    }
    long int size = input.size();
    bool b = false;
    long int meio  = input.size()/ 2;
    for(int i  = 0; i < size/2; i++){
        if(input[i] != input[(i+meio)]){
            b = true;
            break;
        }
    }
    if(b == true) cout << "NO" << endl;
    else cout << "YES" << endl;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    string i;
    cin >> x;
    while(x--){
        cin >> i;
        solve(i);
    }

    return 0;
}
