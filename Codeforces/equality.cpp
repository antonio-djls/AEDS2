#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll int x{}; ll int alf{};

    cin >> x >> alf;

    vector<char> vi;

    char input{};

    ll int ultimo = 0;

    for(ll int k = 0; k < x; k++){        cin >> input;
        if(vi[ultimo] > input || ultimo == 0){
            vi.push_back(input); ultimo++;
        }
    }
    cout << vi.size() << endl;
    return 0;
}
