#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {3,2,1};
    
    sort(v.begin(), v.end());
    for( auto num : v){
        cout << num << endl;
    }
    return 0;
}