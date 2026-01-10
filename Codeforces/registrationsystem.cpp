#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x{};
    cin >> x;
    string input{}; vector<string> vi;
    bool ans = true;
    for(int  k = 0; k < x;k++){
        ans = true;
        cin >> input; vi.push_back(input);
        for(int d = 0; d < vi.size()-1; d++){
            if(input == vi[d]){
                cout << input << "1" << endl; ans = false; break;
            }
        }
        if(ans == true){
            cout << "OK" << endl;
        }

    }

    return 0;
}
