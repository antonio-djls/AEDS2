#include <bits/stdc++.h>
#include <vector>

#define ll long long

using namespace std;

/*
 *
 *
 *
 */
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;

    ll int x{},i{},k{};
    ll int count{},res{};

    vector<int> indice;
    cin >> x;
    cin >> input;

    for(int i = 0; i < input.size(); i++){
        if(input[i] == 'x') indice.push_back(i);
    }
    // for(int i = 0; i < indice.size() - 1;i++){
    //     if(indice[i] == indice[i+1]) count++;
    // }
    //
    for(auto num:indice){
        cout << num << endl;
    }
    return 0;
}
