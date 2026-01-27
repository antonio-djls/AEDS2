#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int n{},m{},a{};
    cin >> n >> m >> a;

    ll int i = (n+a -1)/ a;
    ll int j = (m+a - 1)/ a;
    cout << i*j << endl;

    return 0;
}
