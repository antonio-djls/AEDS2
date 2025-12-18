#include <bits/stdc++.h>
#define ll long long
#define s second
#define f first
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int array[5][5];
    int a{};
    pair<int,int> x;
    

    for(int i = 0 ; i < 5; i++){
        for(int k = 0; k < 5; k++){
            cin >> a;
            if(a == 1){
                x.first = i; x.second = k; 
                // cout << i << k << endl;
            } 
        }
    }

    // pair<int,int> middle ={2,2};
    a = x.first - 2;
    int b = x.second - 2;
    // cout <<"Valor do par " << x.f << x.s << endl;
    a = abs(a); 
    b = abs(b);
    // cout << a << b << endl;
    cout << a + b;

    return 0;
}