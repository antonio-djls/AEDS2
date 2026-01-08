#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;
    int sum = 0;
    string input;
    while(x--){
        cin >> input;
        if(input == "Tetrahedron") sum += 4;
        if(input == "Cube") sum+= 6;
        if(input == "Octahedron") sum += 8;
        if(input == "Dodecahedron") sum += 12;
        if(input == "Icosahedron") sum += 20;
    }
    cout << sum << endl;

    return 0;
}
