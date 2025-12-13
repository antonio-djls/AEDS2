#include<bits/stdc++.h>
#include<map>
#include<string>

using namespace std;

bool find(string name,map<string,int> m){
    if(m.count(name)){
        return true;
    }else{
        return false;
    }
}

int main(){
    map<string,int> m;
    m["Antonio"] = 12;
    cout << find("Antonio",m) << "\n";
    // cout << m["Antonio"] << "\n";
    return 0;
}