#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> v;
    ll int x{},init{},input{};
    cin >> x >> init;

    for(int u = 0; u < init; u++){
        cin >> input;
        if( input > 0) v.insert(input);
    }
    cin >> init;
    for(int u = 0; u < init; u++){
        cin >> input;
        if( input > 0) v.insert(input);
    }
    if(v.size() == x){
        cout << "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
