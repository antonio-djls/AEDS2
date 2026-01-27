#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){


    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string input;
    cin >> input;

    char antigo =  'a';

    char atual = 0; int sum = 0;
    int primeiro{},segundo{};
    for(int i = 0; i < input.size(); i++){
        atual = input[i];
        auto ans = min(abs(atual-antigo),abs(abs(atual-antigo)-26));
        sum += ans;
        antigo = atual;
    }
    cout << sum << endl;
    return 0;
}
