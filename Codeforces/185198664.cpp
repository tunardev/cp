// https://codeforces.com/contest/1669/submission/185198664

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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        for (int j = 30; j >= 0; --j) {
            if (a[i] & (1 << j)) mp[j]++;
        }
    }
 
    ll ans = 0;
    for (int i = 30; i >= 0; --i) {
        if ((n - mp[i]) <= k) {
            k -= (n - mp[i]);
            ans += (1<<i);
        }
    }
    cout << ans << '\n';
}
int main() {
    ll tt;
    cin >> tt;
    while (tt--) solve();
}