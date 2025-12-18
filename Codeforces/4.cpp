#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*

    339A - Helpful Maths

*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll int> v;
    char mais = '+';

    string input;
    cin >> input;
    
    for(char c: input){
        // cout << c << endl;
        if(c != mais){
            // cout << c << "+" ;
            int n =  c - '0';
            v.push_back(n);
        }
    }
    sort(v.begin(),v.end());

    
    // cout << "Ordenado" << endl;
    for(int i = 0; i < v.size(); i++){
        if(i == v.size()-1){
            cout << v[i] << endl;
        }else{
            cout << v[i] << "+";
        }
    }

    return 0;
}
