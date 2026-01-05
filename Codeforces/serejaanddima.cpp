#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int input{};

    vector<int> vi;
    ll int sereja{},dima{};
    ll int x{}; cin >> x;

    while(x--){
        cin >> input; vi.push_back(input);
    }
    int left = 0; int right = vi.size() -1;
    int i = 1;
    while(left <= right){
        if(i % 2 != 0){
            if(vi[left] > vi[right]){
                sereja += vi[left++];
            }else{
                sereja += vi[right--];
            }
        }else{
            if(vi[left] > vi[right]){
                dima += vi[left++];
            }else{
                dima += vi[right--];
            }
        }

        ++i;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
