#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vi  = {11,2,11,3,4};
    replace(vi.begin(),vi.end(),11,1); // Substitui números
    for(int num : vi){
        cout << num << endl;
    }

    return 0;
}
