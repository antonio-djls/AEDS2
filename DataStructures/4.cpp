#include<iostream>
#include<vector>
#include<algorithm>
#include<random>
#include<chrono>

using namespace std;

int main(){
    vector<int> v = {5,2,1,3,4};
    auto seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(v.begin(),v.end(),default_random_engine(seed));

    for(auto num : v){
        cout << num << endl;
    }
    return 0;
}