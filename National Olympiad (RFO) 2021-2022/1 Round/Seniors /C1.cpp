#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = 0, count = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 2) count++;
    }
    for (int i = 0; i < count; ++i) {
        if (a[i] % 2 == 0) {
            ans++;
        }
    }
    cout << ans << '\n';
}