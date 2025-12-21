#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;
    string input;
    for(int i = 0; i < x; i++){
        cin >> input;
        int a{};
        int b{};
        for(int u  = 0; u < input.size(); u++){
            if(input[u] == 'A') a++;
            if(input[u] == 'B') b++;
        }
        if(a > b) cout << "A" << endl;
        else cout << "B" << endl;
    }

    return 0;
}
