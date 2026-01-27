#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int t = 0; cin >> t;

    while(t--){

        int size = 0; cin >> size;

        vector<int> vi;
        int input = 0;

        for(int i = 0; i < size; i++){
            cin >> input;
            if(i == 0 || input != vi.back()){
                vi.push_back(input);
            }
        }

        int count = 0;

        for(int i =  0; i < vi.size(); i++){
            if((i == 0 || vi[i-1] > vi[i]) && (i == vi.size()-1 || vi[i] < vi[i+1]))count++;
        }
        count == 1 ? cout << "YES" << endl :  cout << "NO" << endl;
        vi.clear();
    }

    return 0;
}
