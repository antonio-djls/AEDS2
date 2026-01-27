#include "bits/stdc++.h"
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> vi = {1,2,3};

    for(vector<int>::iterator iterador = vi.begin(); iterador != vi.end(); ++iterador){
        cout << *iterador << endl;
    }

    return 0;
}
