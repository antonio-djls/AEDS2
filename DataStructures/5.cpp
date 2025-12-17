#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<iterator>

using namespace std;

// int main(){
//     vector<int> v = {5,2,1,3,4};
//     reverse(v.begin(),v.end()); // inverte o vetor
//     for(int num : v){
//         cout << num << endl;
//     }

//     return 0;
// }

int main(){
    vector<int> v = {5,3,2,1,8};
    // set<int>::iterator it = v.begin();
    // auto it  = v.begin();

    // cout << *it << endl;
    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout << *it << endl;
    // }
    auto it = v.end(); it--;
    cout << *it << endl;
    return 0;
}