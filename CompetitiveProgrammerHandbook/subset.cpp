#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n{}; cin >> n;
    int contador{};    for (int b = 0; b < (1<<n); b++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (b&(1<<i)) subset.push_back(i);
    }
        ++contador;
    }
    cout << contador<< endl;
    return 0;}
