#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;
    if(x % 2 == 0){
        cout << x/2 << endl;
    }else{
        cout << (x-1)/ 2-x << endl;
    }

    return 0;
}
