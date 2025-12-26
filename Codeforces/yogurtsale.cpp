#include <bits/stdc++.h>

#define ll long long
using namespace std;


/*
 * A. Yogurt Sale
 time limit per test1 second
 memory limit per test256 megabytes
 The price of one yogurt at the "Vosmiorochka" store is a
  burles, but there is a promotion where you can buy two yogurts for b
  burles.

 Maxim needs to buy exactly n
  yogurts. When buying two yogurts, he can choose to buy them at the regular price or at the promotion price.

 What is the minimum amount of burles Maxim should spend to buy n
  yogurts?

 Input
 The first line contains a single integer t
  (1≤t≤104
 ) — the number of test cases.

 The first and only line of each test case contains three integers n
 , a
 , and b
  (1≤n≤100
 , 1≤a,b≤30
 ) — the number of yogurts Maxim wants to buy, the price for one yogurt, and the price for two yogurts on promotion.

 Output
 For each test case, print in a separate line the minimum cost of buying n
  yogurts at "Vosmiorochka".
 *
 *
 */

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;

    ll int a,b,c;
    for(int k = 0; k < x; k++){
        cin >> a >> b >> c; long int s1{},s2{};

        s1 = (a*b); // comprar a unidade
        if(a % 2 == 0){
            s2 = (a/2) * c;
        }else{
            a--;
            s2 = (a/2) * c;
            s2+=b;
        }
        long int res  =  min(s1,s2);
        cout << res << endl;

    }

    return 0;
}
