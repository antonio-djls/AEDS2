#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;
    char atual = input[0]; int count =  1;

    for(int k = 1; k < input.size();k++){
        if(atual == input[k]){
            count++; if(count == 7){
                cout << "YES" << endl;
                return 0;
            }
        }else{
            atual = input[k]; count = 1;
        }
    }
    cout << "NO" << endl;

    return 0;
}
