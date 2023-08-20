#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    long long cnt = n / 4;
    if (n % 4 == 1) {
        if (cnt < 2) {
            cout << "-1\n";
            return 0;
        }
        cout << 1 + cnt - 2 << "\n";
    } else if (n % 4 == 3) {
        if (cnt < 3) {
            cout << "-1\n";
            return 0;
        }
        cout << 2 + cnt - 3 << "\n";
    } else if (n % 4 == 2) {
        if (cnt < 1) {
            cout << "-1\n";
            return 0;
        }
        cout << cnt << "\n";
    } else {
        if (cnt < 1) {
            cout << "-1\n";
            return 0;
        }
        cout << cnt << "\n";
    }
}
