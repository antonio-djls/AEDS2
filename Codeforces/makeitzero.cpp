#include <iostream>
using namespace std;
#define long long ll
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int p = 0; p < n; p++) {
            int x;
            cin >> x;
        }

        if (n % 2 != 0) {
            cout << 4 << '\n';
            cout << "2 " << n << '\n';
            cout << "2 " << n << '\n';
            cout << "1 2\n";
            cout << "1 2\n";
        } else {
            cout << 2 << '\n';
            cout << "1 " << n << '\n';
            cout << "1 " << n << '\n';
        }
    }

    return 0;
}
