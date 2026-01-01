#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int size{}; cin >> size;

    vector<int> vi(size);


    for(int i = 0; i < size; i++){
        cin >> vi[i];
    }

    ll int count = 0;

    for(ll int i  = 0; i < size - 1; i++){
        if(vi[i] > vi[i+1]){
            ll int dif = vi[i] - vi[i+1];
            vi[i+1] += dif;
            count += dif;
        }
    }

    cout << count << endl;

    return 0;
}
