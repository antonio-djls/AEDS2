#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>  vi = {1,2,41,51};
    bool b = binary_search(vi.begin(), vi.end(), 41);
    cout << b << endl; //true
    return 0;
}
