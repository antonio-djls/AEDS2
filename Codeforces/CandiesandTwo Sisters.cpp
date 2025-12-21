#include <bits/stdc++.h>
#include <ios>
#define ll long long
using namespace std;




int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;
    input[0] = input[0] + 26;
    cout << input << endl;
    return 0;
}
