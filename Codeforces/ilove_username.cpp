#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;


/*A. I_love_%username%
time limit per test2 seconds
memory limit per test256 megabytes
Vasya adores sport programming. He can't write programs but he loves to watch the contests' progress. Vasya even has a favorite coder and Vasya pays special attention to him.

One day Vasya decided to collect the results of all contests where his favorite coder participated and track the progress of his coolness. For each contest where this coder participated, he wrote out a single non-negative number — the number of points his favorite coder earned in the contest. Vasya wrote out the points for the contest in the order, in which the contests run (naturally, no two contests ran simultaneously).

Vasya considers a coder's performance in a contest amazing in two situations: he can break either his best or his worst performance record. First, it is amazing if during the contest the coder earns strictly more points that he earned on each past contest. Second, it is amazing if during the contest the coder earns strictly less points that he earned on each past contest. A coder's first contest isn't considered amazing. Now he wants to count the number of amazing performances the coder had throughout his whole history of participating in contests. But the list of earned points turned out long and Vasya can't code... That's why he asks you to help him.

Input
The first line contains the single integer n (1 ≤ n ≤ 1000) — the number of contests where the coder participated.

The next line contains n space-separated non-negative integer numbers — they are the points which the coder has earned. The points are given in the chronological order. All points do not exceed 10000.

Output
 *
 */

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{},input{},menor{0},maior{0},count{},atual{};

    vector<int>vi;
    cin  >> x;

    if(x <=1 ){
        cout << 0 << endl;
        return 0;
    }

    for(ll int k = 0; k < x; k++){
        cin >> input; vi.push_back(input);
        atual = vi.size() -1;
        for(int u = 0; u < atual; u++){
            if(vi[atual] < vi[u]) ++menor;
            if(vi[atual] > vi[u]) ++maior;
        }
        if(maior  ==  vi.size() - 1 || menor == vi.size() -1){count++;}
        menor = 0; maior = 0;

    }
    cout << count-1 << endl;
    return 0;
}
