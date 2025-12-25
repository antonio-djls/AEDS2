#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{},input{};
    vector<int> vi;
    cin >>x ;

    if( x % 2 ==0){
        for(int u = 1; u <=x ; u++){ vi.push_back(u);}

        ll int atual = 0;
        while(atual + 1 <= vi.size() -1){
            swap(vi[atual],vi[atual+1]);
            atual+=2;
        }
        for(int k = 0; k < x; k++){
            cout << vi[k] << " ";
        }

    }else{
        cout << -1 << endl;
    }

    return 0;
}
