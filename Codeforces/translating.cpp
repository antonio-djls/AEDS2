#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1,s2;
    cin >> s1 >> s2;
    int size = s1.size() - 1;
    if(s1.size() != s2.size()){
        cout << "NO" << endl;
        return 0;
    }
    for(int k = 0; k < s1.size(); k++){
        if(s1[k] != s2[size - k]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
