#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 *
 * A. Minimal Square
 time limit per test2 seconds
 memory limit per test256 megabytes
 Find the minimum area of a square land on which you can place two identical rectangular a×b
  houses. The sides of the houses should be parallel to the sides of the desired square land.

 Formally,

 You are given two identical rectangles with side lengths a
  and b
  (1≤a,b≤100
 ) — positive integers (you are given just the sizes, but not their positions).
 Find the square of the minimum area that contains both given rectangles. Rectangles can be rotated (both or just one), moved, but the sides of the rectangles should be parallel to the sides of the desired square.
 Two rectangles can touch each other (side or corner), but cannot intersect. Rectangles can also touch the sides of the square but must be completely inside it. You can rotate the rectangles. Take a look at the examples for a better understanding.
 */

 int cal(int a, int b){
     ll int res = min(max(2*a,b), max(a,2*b));
     return res*res;
 }


 int main(){
     ll int x{};
     ll int a{},b{};

     cin >> x;
     for(int i  = 0; i < x; i++){
         cin >> a >> b;
         ll int ans = cal(a,b);
         cout << ans << endl;
     }



     return 0;
 }
