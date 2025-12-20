#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Função FILL -> preenche um intervalo com um valor especifico
    vector<int> vi(5);
    fill(vi.begin(),vi.end(),2);

    for(int num : vi){
        cout << num << endl;
    }
    return 0;
}
