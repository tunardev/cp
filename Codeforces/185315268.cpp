// https://codeforces.com/contest/1762/submission/185315268

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
 
void solve() {
    ll n, sum = 0;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
 
    if (sum % 2 == 0) {
        cout << "0\n";
        return;
    }
 
    ll ans = 1e18;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) {
            ans = 1;
            cout << ans << '\n';
            return;
        } 
 
        if (!(a[i] & 1)) {
            ll count = 0;
            while (!(a[i] & 1)) {
                a[i] /= 2;
                count++;
            }
            ans = min(ans, count);
        } else {
            if ((a[i] / 2) & 1) {
                ll count = 0;
                while (a[i] & 1) {
                    a[i] /= 2;
                    count++;
                }
                ans = min(ans, count);
            } else {
                ans = 1;
                cout << ans << '\n';
                return;
            }
        }
    }
    cout << ans << '\n';
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}