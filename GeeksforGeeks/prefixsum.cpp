#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Input: arr[] = [10, 20, 10, 5, 15]
    // Output: [10, 30, 40, 45, 60]

    vector<int> vi =  {1,2,3,4,5,6};
    int sum{};
    for(int k = 0; k < vi.size(); k++){
        // if(k == 0){
        //     cout << vi[k] << endl; continue;
        // }
        for(int u = k; u >= 0; u--){
            sum+= vi[u];
        }
        cout << sum << endl; sum = 0;
    }

    return 0;
}
