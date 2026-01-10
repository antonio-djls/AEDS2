#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x{}; cin >>x;
    string input{};
    map<string,int> mi;

    for(int k = 0; k < x; k++){
        cin >> input;

        auto ans = mi.count(input);
        if(ans == 0){
            mi[input] = 0;
            cout << "OK" << endl;
        }else{
            mi[input] += 1;
            cout << input << mi[input]<<endl;
        }
    }

    return 0;
}
