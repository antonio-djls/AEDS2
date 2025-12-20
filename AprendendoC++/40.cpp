#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int main(){
        vector<int> v = {1,2,3,4,5};
        auto k = stable_partition(v.begin(),v.end(),[](int x) {return x % 2 == 0;});
        for(int i  : v){
            cout << i << endl;
        }
        cout << "Números que atendem a condição lambda " << endl;
        for(int l = 0; l <= *k; l++){
            cout << v[l] << endl;
        }
    return 0;
}
