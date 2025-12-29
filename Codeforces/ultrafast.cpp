#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a{},b{},output{};
    cin >> a >> b;
    for(int k = 0; k < a.size(); k++){
        if(a[k] != b[k]) output+='1';
        else output +='0';
    }
    cout << output << endl;
    return 0;
}
