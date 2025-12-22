#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int a{};
    vector<int> vi;
    for(int i = 0; i < 3; i++){
        cin >> a;
        vi.push_back(a);
    }
    sort(vi.begin(),vi.end());
    ll int res = abs(vi[0]-vi[2]);
    ll int res2 = abs(vi[1]- vi[2]);
    if(res >= 10 || res2 >=10){
        cout << "check again" << endl;
    }else{
        cout << "final " << vi[1] << endl;
    }
    return 0;
}
