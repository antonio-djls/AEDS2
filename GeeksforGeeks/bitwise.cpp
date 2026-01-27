#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int a = 5;
    // int b = 3;
    // int c = a ^ b;
    // cout <<  c << endl;

    for(int i = 2; i <= 10 ; i++){
        int sum = i << 2; // multiplica por quatro
        cout << sum << " " << i << endl;
    }

    return 0;
}
