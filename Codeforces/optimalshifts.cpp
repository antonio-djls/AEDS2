#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x{}; cin >> x;
    string input{};
    int size{};

    while(x--){

        cin >> size;
        cin >> input;

        int zeros =  count(input.begin(),input.end(),0);
        int ums =  count(input.begin(),input.end(),1);

        if(zeros > ums){
            cout << zeros-ums << endl;
        }else if(ums > zeros){
            cout << ums - zeros << endl;
        }else{
            cout << 0  << endl;
        }

    }


    return 0;
}
