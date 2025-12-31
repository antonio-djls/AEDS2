#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    int size{},input{};
    cin >> x;
    while(x--){
        cin >> size;
        vector<int> vi;
        for(int k = 0; k < size; k++){
            cin >> input; vi.push_back(input);
        }
        if(vi[0] == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        vi.clear();
    }

    return 0;
}
