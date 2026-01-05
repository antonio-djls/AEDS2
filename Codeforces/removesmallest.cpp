#include <bits/stdc++.h>
#include <functional>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin>> x;
    int input{},size{};
    vector<int> vi;
    vector<int> arr;
    while(x--){
        cin >> size;
        for(int k = 0; k < size; k++){
            cin >> input; vi.push_back(input);
        }
        sort(vi.begin(),vi.end());
        if(vi.size() == 1){
            cout << "YES" << endl;
            vi.clear(); arr.clear();
        }else{
            for(int k = 0; k < size-1; k++){
                int dif = abs(vi[k+1] - vi[k]);
                arr.push_back(dif);
            }
            sort(arr.begin(),arr.end(),greater<int>());
            if(arr[0] > 1){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
            vi.clear(); arr.clear();
        }
    }

    return 0;
}
