#include <bits/stdc++.h>
#include <climits>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int size{}; cin >> size;
    vector<int> vi(size);
    for(int i = 0; i < size; i++){cin >> vi[i];}

    int portao = 0;
    int minimo_tempo = INT_MAX;
    for(int i = 0; i < size; i++){
        ll int tempo  = i;

        while(tempo < vi[i]){
            tempo += size;
        }
        if(tempo < minimo_tempo){
            minimo_tempo = tempo;
            portao = (i+1);
        }
    }

    cout << portao << endl;
    return 0;
}
