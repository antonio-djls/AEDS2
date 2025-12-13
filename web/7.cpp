#include<bits/stdc++.h>


using namespace std;

// Selection Short

int main(){
    vector<int> v = {7, 12, 9, 11, 3};
    int aux{},min{};
    for(int k = 0; k < v.size(); k++){
        min = k;
        for(int i  = k + 1; i < v.size(); i++){
            if(v.at(k) > v.at(i)){
                min = i;
            }
        
        }
        swap(v.at(k),v.at(min));
    }
    for(auto num : v){
        cout << num << " ";
    }
    return 0;
}