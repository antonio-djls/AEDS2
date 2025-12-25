#include <bits/stdc++.h>
#include <cmath>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int input;
    ll int x{},sum{},sum_2;
    cin >> x;
    for(int  i = 0; i < x; i++){
        cin >> input;
        // sum = (10 * (input[0]- '0')) + (input[1] -'0'); sum_2 = (10 * (input[2]- '0')) + (input[3] - '0');
        // cout << sum << sum_2 << endl;
         // int year = pow((sum+sum_2),2); int raiz = stoi(input); raiz = sqrt(raiz);
         int raiz = ceil(sqrt(input));
         if(pow(raiz,2) == input){
             cout << "0" << " " << raiz << endl;
         }else{
             cout << -1 << endl;
         }
    }

    return 0;
}
