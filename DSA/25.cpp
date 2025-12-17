#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v = {5,4,2,1};
    int x{};
    sort(v.begin(),v.end());
    auto k  = lower_bound(v.begin(),v.end(),x);
    auto j  = upper_bound(v.begin(),v.end(),x);
    cout << *k << endl;
    cout << *j << endl;
    return 0;
}