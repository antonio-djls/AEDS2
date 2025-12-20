#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{},y{};

    cin >>  x >> y;
    ll int multi = x * y;
    ll int res{};
    int i = 0;
    while(i == 0){
        if(multi >=2){
            res++;
            multi-=2;
        }else{
            i++;
        }
    }
    cout << res << endl;



    return 0;
}
