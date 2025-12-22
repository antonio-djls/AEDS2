#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;

    for(int  i = 0; i < x; i++){
        ll int size{};
        ll int sol{},error{},a{};
        cin >> size;
        for(int u = 0; u < size; u++){
            cin >> a;
            if(a % 2 != u % 2){
                if(u % 2 == 0){
                    error++;
                }else{
                    sol++;
                }
            }
        }
        if(error != sol){
            cout << -1 << endl;
        }else{
            cout << error << endl;
        }
    }

    return 0;
}
