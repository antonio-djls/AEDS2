#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int m{},c{};

    int a{},b{};

    ll int x{};

    cin >> x;
    while(x--){
        cin >> a >> b;
        if(a > b)m++;
        else if(b > a) c++;
    }
    if(m > c){
        cout << "Mishka" << endl;
    }else if(c > m){
        cout << "Chris" << endl;
    }else{
        cout << "Friendship is magic!^^" << endl;
    }



    return 0;
}
