#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int res{},x{};
    string input;
    cin >>x ;
    cin >> input;
    
    for(char& c: input){
        c = tolower(c);
    }

    for(char ch = 'a'; ch <= 'z'; ch++){
        for(char c : input){
            if(ch == c){
                res++;
                break;
            }
        }
    }
    if(res == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}