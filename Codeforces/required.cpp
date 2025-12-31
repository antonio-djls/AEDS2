#include <bits/stdc++.h>

#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int d{}; cin >>d;

    ll int x{},y{},n{},modulo{};
    while(d--){

        cin >> x >> y >> n;
        if (n - n % x + y <= n) {
			cout << n - n % x + y << endl;
		} else {
			cout << n - n % x - (x - y) << endl;
		}
    }



    return 0;
}
