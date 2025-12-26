#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    ll int x{}; cin >> x;

    while(x > 0){
        string sum;
        for(int k = 0; k < 3; k++){
            cin >> input;
            sum += input[0];
        }
        cout << sum << endl;

        x--;
    }


    return 0;
}
