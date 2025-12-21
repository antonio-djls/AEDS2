
#include <bits/stdc++.h>

#define ll long long

using namespace std;

/*
 * A. Same Difference
 time limit per test1 second
 memory limit per test256 megabytes

 You are given a string s
  of length n
 , consisting of lowercase letters.

 In one operation, you can select an integer i
  such that 1≤i<n
  and change si
  into si+1
 .

 What is the minimum number of operations needed to make every character the same? It can be proved that this is always possible.

 Input
 Each test contains multiple test cases. The first line contains the number of test cases t
  (1≤t≤20
 ). The description of the test cases follows.

 The first line of each test case contains an integer n
  (2≤n≤100
 ) — the length of the string.

 The following line contains a string s
  of length n
 , consisting of lowercase letters.

 It is guaranteed that the sum of n
  over all test cases does not exceed 100
 .

 Output
 For each test case, output a single integer — the minimum number of operations needed to make every character the same.


 */





int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;

    ll int length{},count{};
    string input;

    for(int i = 0; i < x; i++){
        cin >> length >> input;
        for(int k = 0; k < length -1; k++){
            if(input[length - 1]  !=  input[k]) count++;
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}
