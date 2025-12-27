#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int a{},b{};
    cin >> a >> b;
    for(ll int k = a +1; k < b; k++){
        if(isPrime(k)){
            cout << "NO" << endl; return 0;
        }

    }
    if(isPrime(b)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
