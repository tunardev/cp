#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, res, ans = 0;
    cin >> n;
    for (long long i = 1; (i * (i - 1) >> 1) < n; ++i) {
        res = (n - i * (i - 1) >> 1);
        if (res % i == 0) {
            ans++;
        }
    }
    
    cout << ans * 2 << '\n';
}