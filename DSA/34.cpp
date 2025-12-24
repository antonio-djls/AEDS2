#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> vi = {5,4,3,2,1};
    int left,right;
    right = vi.size() - 1;
    left = 0;
    while(right != left){
        swap(vi[left],vi[right]);
        left++;
        right--;
    }
    for(auto num : vi){
        cout << num << endl;
    }


    return 0;
}
