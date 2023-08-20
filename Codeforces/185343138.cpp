// https://codeforces.com/contest/1762/submission/185343138

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
        ll count = 0, m = a[i] % 2;
        while (a[i] % 2 == m) {
            count++;
            a[i] /= 2;
        }
        if (count != 0) ans = min(ans, count);
    }
    cout << ans << "\n";
}
int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}