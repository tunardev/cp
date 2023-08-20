// https://codeforces.com/contest/1671/submission/185202642

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define mod (int)(1e9 + 7)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define INF 0x3f3f3f3f
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    if (n != 1) {
        ll ans = 0;
        for (ll i = 0; i < n - 1; i++) {
            ans += (a[i + 1] - (a[i] + 1));
        }
        cout << ((ans <= 2) ? "YES\n": "NO\n");
    } else {
        cout << "YES\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    ll tt;
    cin >> tt;
    while (tt--) solve();
}