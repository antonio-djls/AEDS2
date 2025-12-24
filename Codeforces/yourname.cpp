#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


/*
 *
 *
 * khba is writing his girlfriend's name. He has n
  cubes, each with one lowercase Latin letter written on it. They are arranged in a row, forming a string s
 . His girlfriend's name is also a string t
 , consisting of n
  lowercase Latin letters.

 To prove his love, he must check whether it is possible to rearrange the letters of string s
  so that it becomes her name t
 .

 Input
 The first line contains an integer q
  (1≤q≤1000
 ) — the number of test cases.

 The first line of each test case contains an integer n
  (1≤n≤20
 ).

 The second line of each test case contains two distinct strings s
  and t
 , each consisting of n
  lowercase Latin letters.

 Output
 For each test case, output "YES" if the letters of s
  can be arranged to form t
 ; otherwise, output "NO".

 You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as positive responses.
 */


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string p1,p2;


    ll int x{};
    cin >> x;

    while(x--){
        ll int size{},s1{},s2{};
        cin >> size;
        cin >> p1 >> p2;
        vector<ll int> vi;
        vector<ll int> vi2;
        for(ll int  i = 0;i < size; i++){
            // s1+= int(p1[i]);
            // s2+= int(p2[i]);
            vi.push_back(int(p1[i]));
            vi2.push_back(int(p2[i]));

        }
        sort(vi.begin(),vi.end());
        sort(vi2.begin(),vi2.end());
        if(vi == vi2){ cout << "YES" << endl;}
        else cout << "NO" << endl;
        vi.clear();
        vi2.clear();


    }

    return 0;
}
