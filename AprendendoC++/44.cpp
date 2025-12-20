#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vi  = {1,2,3};
    vector<int> destino(3);

    copy(vi.begin(),vi.end(),destino.begin());
    for(int num : destino){
        cout << num << endl;
    }

    return 0;
}
