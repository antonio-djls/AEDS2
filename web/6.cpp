#include<bits/stdc++.h>

using namespace std;

// Bubble Sort
int main(){
    vector<int> v = {7, 12, 9, 11, 3};

    for(int k = 0; k < v.size(); k++){
        for(int i = k + 1; i < v.size(); i++){
            if(v.at(k) > v.at(i)){
                swap(v.at(k),v.at(i));
            }

        }
    }
    for(int num :v){
        cout << num << endl;
    }

    return 0;
}