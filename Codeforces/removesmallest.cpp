#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >>x;

    while(x--){
        int size{}; cin >> size;
        vector<int> arr;
        for(int i = 0;i < size; i++){
            cin >> arr[i];
        }
        int count = 0;
        for(int k = 0; k < size; k++){
            if(arr[k+1] - arr[k] <=1){
                count++;
                break;
            }
        }
        if(count != 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }

    }

    return 0;
}
