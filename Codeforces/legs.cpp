#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{},count{},y{};

    cin >> y;
    for(int j = 0; j < y; j++){
        cin >> x;
        while(true){
                if(x >= 4){
                    count++;
                    x-=4;
                }else if(x >= 2){
                    count++;
                    x-=2;
                }
                if(x == 0 || x == 1) break;
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}
