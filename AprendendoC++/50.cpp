#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vi = {2,241,11,1,5,3};

    sort(vi.begin(),vi.end());

    for(auto num : vi){
        cout << num << endl;
    }

    return 0;
}
