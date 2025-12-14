#include<bits/stdc++.h>
#include<map>
#include<string>

using namespace std;


int main(){
    map<string,int> m;
    m["Antonio"] = 12;


    for(auto num : m){
        cout << num.first << " " << num.second;
    }
    return 0;
}