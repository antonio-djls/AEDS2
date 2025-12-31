#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int size{},indice{},input{},count{};
    cin >> size; cin >> indice;
    vector<int> vi;
    while(size--){
        cin >> input; vi.push_back(input);
    }
    int obj = vi[indice-1];
    for(int i = 0; i < vi.size(); i++){
        if(vi[i] >= obj && vi[i] != 0) count++;
    }
    cout << count << endl;

    return 0;
}
