#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;
    ll int count  = 0;
    for(int i = 0; i < input.size(); i++){
        if(input[i] == '4' || input[i] == '7'){
           count++;
        }
    }
    if(count == 4 || count == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
