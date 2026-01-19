// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;



// int main(){

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int x{},n{};
//     cin >> n;

//     for (int b = 0; b < (1<<n); b++) {
//         vector<int> subset;


//     for (int i = 0; i < n; i++) {
//         if (b&(1<<i)) subset.push_back(i);
//         }
//     }


//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> subset;

void search(int k) {
    if (k == n) {
        // processa o subset gerado
        // cout << "{ ";
        for (int x : subset) {
            cout << x << " ";
        }
        cout << endl;
        // cout << "}\n";
    } else {
        // caso 1: não incluir k
        search(k + 1);

        // caso 2: incluir k
        subset.push_back(k);
        search(k + 1);
        subset.pop_back(); // backtracking
    }
}

int main() {
    n = 3;          // tamanho do conjunto {0, 1, ..., n-1}
    search(0);      // inicia a geração dos subsets
    return 0;
}
