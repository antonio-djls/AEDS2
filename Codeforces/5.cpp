#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
    1873A - Short Sort
*/


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{};
    cin >> x;
    ll int i{};

    for(ll int i = 0; i < x; i++){
        string input;
        cin >> input;
        if(input == "bac" || input == "acb" || input == "cba" ||input == "abc"){
            cout << "YES" << endl;
        }else{
            cout << "NO"<< endl;
        }
    }


    return 0;
}