#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, m, count = 0;
    cin >> n >> m;
    while (1) {
        if (n == 0 || m == 0 || n + m <= 2) break;
        else {
            if (n < m) {
                n--;
                m -= 2;
            } else {
                m--;
                n -= 2;
            }

            count++;
        }
    }

    cout << count << '\n';
}