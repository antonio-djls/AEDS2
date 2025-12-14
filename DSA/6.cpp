#include<iostream>
#define ll long long int
using namespace std;

int main(){
    ll x {};
    ll array[2];
    cin >> x;
    while(x > 0){
        for(int k = 0; k < 2; k++){
            cin >> array[k];
        }

        x--;
    }

    return 0;
}