#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;
    vector<int>input(1000000);

    for(int i = 0; i < x; i++){
        cin >> input[i];
    }
    int count = 0;
    for(int i = 0; i < x; i++){
        if(input[i]!= input[i+1])count++;

    }    cout << count << endl;
    return 0;
}
