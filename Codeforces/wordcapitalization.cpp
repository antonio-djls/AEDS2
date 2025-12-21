#include <bits/stdc++.h>
#include <ios>
#define ll long long
using namespace std;




int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;
    // cout << int(input[0]) << endl;
    if(int(input[0]) >= 65 && int(input[0]) <= 90){
        cout << input  << endl;
    }else if(int(input[0]) >= 97 && int(input[0]) <= 122){
        input[0] = char ((int(input[0])) - 32);
        cout << input << endl;
    }
    return 0;
}
