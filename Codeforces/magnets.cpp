#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;
    string n1;
    vector<string> vi;

    ll int count{};
    for(int i  = 0; i < x; i++){
        cin >> n1;
        vi.push_back(n1);
    }
    for(int i = 0; i < x; i++){
        if(vi[i] == vi[i+1]) count++;
    }
    cout << count << endl;
    return 0;
}
