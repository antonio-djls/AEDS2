#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;
    int num = 0;
    vector<int>vi;


    while(x--){
        string input; cin >> input;

        while(cin >> num){
            vi.push_back(num);
        }
        int a = 0, b = 0;
        for(int i = 0; i < vi.size(); i++){
            for(int k = 0; k < input.size(); k++){
                if(input[k]-'0' == vi[i]){
                    a++;
                    if(i == k)b++;
                }
            }
        }
        cout << a << "A" << b  << "B" << endl;
        input.clear(); vi.clear();
    }

    return 0;
}
