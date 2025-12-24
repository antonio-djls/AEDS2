#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {3, 5, 4, 1, 9};

    // auto it = min_element(arr.begin(),arr.end());

    // auto it2 = max_element(arr.begin(),arr.end());
    // cout << *it2 << endl;
    // cout << *it << endl;
    //
    int left = 0;
    int right = arr.size() - 1;
    int minor{};

    while(left != right){
        if(arr[left]  < arr[minor] && arr[left] < arr[right]) minor = left;
        else if(arr[right] < arr[minor] && arr[right] < arr[left]) minor = right;
        left++;
        right--;
    }
    cout << arr[minor] << endl;
    return 0;
}
