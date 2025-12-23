#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Lucky?
 time limit per test1 second
 memory limit per test256 megabytes
 A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

 Input
 The first line of the input contains an integer t
  (1≤t≤103
 ) — the number of testcases.

 The description of each test consists of one line containing one string consisting of six digits.

 Output
 Output t
  lines, each of which contains the answer to the corresponding test case. Output "YES" if the given ticket is lucky, and "NO" otherwise.

 You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
 */

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;

    for(int  i = 0; i < x; i++){
        string input;
        cin >> input;
        ll int s{},s2{};
        for(int k = 0; k <= 5; k++){
            int num = input[k] - '0';
            if(k > 2) s+=num;
            else s2+=num;
        }

        if(s == s2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
