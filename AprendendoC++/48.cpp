#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vi  = {1,2,13,14,22};
    auto b = find(vi.begin(),vi.end(),14);

    cout << *b << endl;

    return 0;
}
