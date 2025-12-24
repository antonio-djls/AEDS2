#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string input;
    cin >> input;

    ll int left{},right = input.size() - 1;
    bool b = true;
    while(left != right){
        if(input[left] != input[right]){
            cout << "n palindromo" << endl; b = false;
            break;
        }
        left++; right--;
    }
    if(b == true) cout << "palindromo " << endl;
    return 0;
}
