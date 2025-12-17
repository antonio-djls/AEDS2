#include<iostream>
#include<map>

using namespace std;


int main(){
    map<string,int> m;
    m["banana"] = 9;

    // cout << m["banana"] << endl;
    // cout << m.count("banana") << endl;
    
    for(auto v : m){
        cout << v.first << " " << v.second << endl;
    }
    
    return 0;

}