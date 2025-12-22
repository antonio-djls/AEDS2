#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {84, 12, 45, 7, 91, 23, 56, 100, 3, 67, 29, 44, 11, 78, 9, 35, 62, 1, 88, 50};
    sort(v.begin(),v.end());
    int atual = 0,fim = v.size() -1;
    int meio{};
    int mira = 29;


    while(atual < fim){
        meio = (atual + fim ) / 2;
        if(v[meio] < mira) atual = meio + 1;
        else fim = meio;
    }
    cout << v[atual] << endl;

    return 0;
}
