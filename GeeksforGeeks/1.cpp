#include <algorithm>
#include<iostream>
using namespace std;

int main(){
    long long int n{};    cin >> n;
    for(long long int i = 0; i < n; i++){
        for(long long int k = 0; k <= i; k++){
            cout << "*";
        }
        cout << " ";
    }
    return 0;
}
