#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * A. IQ test
 time limit per test2 seconds
 memory limit per test256 megabytes
 Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

 Input
 The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

 Output
 Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order
 *
 *
 */

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;
    int input{}; vector<int> vi;
    int par{},impar{};
    while(x--){
        cin >> input; vi.push_back(input);
        if(input % 2 == 0 && (input != 1)) par++;
        else impar++;
    }
    if(par > impar){
        for(int k = 0; k < vi.size(); k++){
            if(vi[k] % 2 != 0){
                cout << (k+1) << endl;
                return 0;
            }
        }
    }else{
        for(int k = 0; k < vi.size(); k++){
            if(vi[k] % 2 == 0){
                cout << (k+1) << endl; return 0;
            }
        }
    }

    return 0;
}
