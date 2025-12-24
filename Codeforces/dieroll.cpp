#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int a{},b{};

    cin >> a >> b;
    ll int m = max(a,b); ll int range = 6 - m + 1;
    int total = 6;
    // cout << range / total;
    if(range % 3 == 0 && total % 3 == 0){
        range /=3; total /=3;
    }
    if(range % 2 == 0 && total % 2 == 0){
        range /= 2; total/=2;
    }
    cout << range <<"/"<< total;



    return 0;
}
