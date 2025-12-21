#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Division?
 time limit per test1 second
 memory limit per test256 megabytes
 Codeforces separates its users into 4
  divisions by their rating:

 For Division 1: 1900≤rating
 For Division 2: 1600≤rating≤1899
 For Division 3: 1400≤rating≤1599
 For Division 4: rating≤1399
 Given a rating
 , print in which division the rating
  belongs.

 Input
 The first line of the input contains an integer t
  (1≤t≤104
 ) — the number of testcases.

 The description of each test case consists of one line containing one integer rating
  (−5000≤rating≤5000
 ).

 Output
 For each test case, output a single line containing the correct division in the format "Division X", where X
  is an integer between 1
  and 4
  representing the division for the corresponding rating.
 */


 void solve(int x){
     if(x <= 1399){
         cout << "Division 4"<< endl;
     }else if(x >= 1400 & x <=1599){
         cout << "Division 3" << endl;
     }else if(x >=1600 && x <=1899){
         cout << "Division 2" << endl;
     }else if(x >= 1900){
            cout << "Division 1" << endl;
     }
 }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x{}, a{};

    cin >> x;
    for(int i  = 0; i < x; i++){
        cin >> a;
        solve(a);
    }


    return 0;
}
