#include<bits/stdc++.h>

#define ll long long 

using namespace std;

int main(){
    vector<ll int> v ={7, 12, 9, 4, 11};

    int minor{0};
    for(int  k = minor + 1; k < v.size(); k++){
        if(v[minor] > v[k]){
            minor = k;
        }
    }
    cout << "Menor elemento " << v.at(minor) << endl;

    return 0;
}