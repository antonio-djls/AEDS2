#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll int x{};
    cin >> x;

    ll int qtd = 0;
    int arr[] = {1,5,10,20,100};
    int option =  4;
    if(x % 100 == 0){
        cout << x/100 << endl; return 0;
    }
    while(x != 0 && option >= 0){
        if(x >= arr[option]){
            qtd += 1;
            x -= arr[option];
        }else{
            option--;
        }
    }
    cout << qtd << endl;
    return 0;
}
