// https://codeforces.com/contest/1762/submission/185309124

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
 
void solve() {
    ll n;
    cin >> n;
    ll x = 0, y = 0;
    vector<ll> v;
    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        if (a&1) {
            y++;
            v.push_back(a);
        } else x++;
    }
    if (y&1) {
        ll ans = 0, f = v[0];
        if (f == 1) ans++;
        while (f % 2 && f != 1) {
            ans++;
            f /= 2;
        }
        cout << ans << '\n';
    } else cout << "0\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}