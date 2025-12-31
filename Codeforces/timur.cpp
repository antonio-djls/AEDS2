#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x {},size{}; cin >> x;

    string input;
    vector<char> vi ={'T','i','m','u','r'};
    while(x--){
        cin >> size;
        cin >> input;

        int count = 0;

        if(input.size() <=5){
            for(int i = 0; i <= 4 ; i++){
                // cout << vi[i] << endl;
                if(input.find(vi[i]) != string::npos){
                    count++;
                }
            }
        if(count == 5) cout << "YES" << endl;
        else cout << "NO" << endl;}
        else cout << "NO" << endl;
    }
    return 0;
}
