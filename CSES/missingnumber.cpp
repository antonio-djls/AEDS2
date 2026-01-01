#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;
    vector<int> arr(x);
    for(int k = 0; k < x -1; k++){
        cin >> arr[k];
    }
    sort(arr.begin(),arr.end());
    for(int k = 0; k < arr.size(); k++){
        ll int dif = arr[k+1] - arr[k];
        if(dif > 1){
            cout << k+1 << endl;
            return 0;
        }
    }
    cout << x << endl;


    return 0;
}
