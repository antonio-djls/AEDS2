#include <bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;

/*
 * C. Can I Square?
 time limit per test1 second
 memory limit per test256 megabytes
 Calin has n
  buckets, the i
 -th of which contains ai
  wooden squares of side length 1
 .

 Can Calin build a square using all the given squares?

 Input
 The first line contains a single integer t
  (1≤t≤104
 ) — the number of test cases.

 The first line of each test case contains a single integer n
  (1≤n≤2⋅105
 ) — the number of buckets.

 The second line of each test case contains n
  integers a1,…,an
  (1≤ai≤109
 ) — the number of squares in each bucket.

 The sum of n
  over all test cases does not exceed 2⋅105
 .

 Output
 For each test case, output "YES" if Calin can build a square using all of the given 1×1
  squares, and "NO" otherwise.

 You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
 *
 *
 */
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll int n{};
    cin >> n;

    while(n--){
        ll int a{};
        cin >> a;
        ll int sum{},k{};
        for(int  i = 0; i < a;i++){
             cin >> k; sum+= k;
        }
        ll int t{},ans{};
        double ex = sqrt(sum);
        if( ex == int(ex)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        // for(ll int i = 1; i < sum; i++){
        //     if((i*i) == sum){
        //         ans++;
        //         break;
        //     }
        // }
        // if(ans != 0)cout << "YES" << endl; else cout << "NO" << endl;
        // n--;
    }

    return 0;
}
