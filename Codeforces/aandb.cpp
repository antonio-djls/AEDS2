#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x{};
    cin >> x;

    while (x--) {

        ll size;
        cin >> size;

        string input;
        cin >> input;

        if (input.size() <= 1) {
            cout << 0 << endl;
            continue;
        }

        vector<int> vi,v;

        for (int i = 0; i < input.size(); i++) {
            if (input[i] != 'a') {
                vi.push_back(i);
            }else{
                v.push_back(i);
            }
        }

        int ans_1,ans_2,mediana;

        if(vi.size()){
            int mediana = vi.size()/2;
            for(int i = 0; i < vi.size(); i++){
                ans_1 += vi[mediana] - vi[i] - (mediana - i);
                if()
            }
        }





    }

    return 0;
}
