#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll int x{};
    cin >> x;

    while(x--){
        ll int size{}, entrada{};
        vector<long int> vi;
        cin >> size;
        for(int u = 0; u < size; u++){
            cin >> entrada;
            vi.push_back(entrada);
        }
        sort(vi.begin(),vi.end());

        ll int s1{},s2{};

        while(vi.size() != 1){
            if(s1 > s2){
                auto it = max(vi.begin(),vi.end());
                s1 += *it;
                vi.erase(it);
            }else{
                auto it = max(vi.begin(),vi.end());
                s2 += *it;
                vi.erase(it);
            }
        }
        cout << vi[0] << endl;
        vi.clear();
    }




    return 0;
}
