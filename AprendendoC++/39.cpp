#include<bits/stdc++.h>



using namespace std;

int main(){
    vector<int> v1 = {11,2,3,4}; // 11 + 2 + 3 + 4  = 13 + 7 = 20;
    long int res = accumulate(v1.begin(),v1.end(),0); // itera do inicio ao fim e retorna a soma completa

    cout << res << endl;

    return 0;
}
