#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;

    ll int a,b,soma{};
    while(x--){
        cin >> a >> b;
        if(isPrime(a+b)){
            soma = (a+b)-1/2;
        }else{
            soma = (a+b)/2;
        }
        ll int ans = (soma - a) + (b - soma);
        cout << ans << endl;
    }

    return 0;
}
