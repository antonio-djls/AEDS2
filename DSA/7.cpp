// Geek for Geek // Print the pattern

#include<iostream>
#define ll long long int
using namespace std;

int main(){
    ll x{};
    cin >> x;
    
    for(int k = 0; k < (x); k++){
        for(int  i = 0; i <= k; i++){
            cout << "*";
        }
        cout << endl;
    }
    for(int k = x; k >= 0; k--){
        for(int i = 0; i < k; i++){
            cout << "*";
        }
        cout << endl;
    }

    


    return 0;
}