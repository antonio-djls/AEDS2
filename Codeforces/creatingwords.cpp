#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;

    string s1,s2;
    while(x--){
        cin >> s1  >> s2;
        char a = s1[0]; char b = s2[0];
        for(ll int k = 0; k < 1; k++){
            if(s1[k] == a){
                s1[k] = b;
            }
            if(s2[k] == b){
                s2[k] = a;
            }
        }
        cout << s1 << " " << s2 << endl;

    }


    return 0;
}
