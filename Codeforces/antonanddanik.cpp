#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;
    string input; cin >> input;
    ll int a{},d{};
    for(int i = 0; i < x; i++){
        if(input[i] == 'A'){a++;}
        else d++;
    }
    if( a > d) cout << "Anton" << endl;
    else if(d > a) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    return 0;
}
