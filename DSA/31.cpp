#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {84, 12, 45, 7, 91, 23, 56, 100, 3, 67, 29, 44, 11, 78, 9, 35, 62, 1, 88, 50};
    sort(v.begin(),v.end());

    int res = lower_bound(v.begin(),v.end(), 4) - v.begin();
    int res2 = upper_bound(v.begin(),v.end(),29) - v.begin();

    cout << v[res] << endl;
    cout << v[res2] << endl;

    return 0;
}
