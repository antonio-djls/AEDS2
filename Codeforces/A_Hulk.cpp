#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int x{};
    vector<string> names = {"I hate that ", "I hate it ", "I love that ","I love it "};
    cin >> x;
    
    ll int sum{},sum1{};

    for(ll int i = 1; i <= x; i++){
        if((i == x) && (x % 3 == 0)){
            cout << names[1];
              break;
        } 
        if((i == x) && (x % 2 ==0)){
            cout << names[3];
            break;
        }
        if(x == 1 || x % 3 == 0){
            cout << names[0];
        }else if(x == 2 || x % 2 ==0){
            cout << names[2];
        }
    }
    return 0;
}