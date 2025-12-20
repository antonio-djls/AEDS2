#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> vi ={1,2,3,4,5};
    transform(vi.begin(),vi.end(),vi.begin(),[] (int x) { return x+=2;});
    // Passo o iteravel de inicio e fim com o iterador inicial
    for(int num :vi){
        cout << num << endl;
    }

    return 0;
}
