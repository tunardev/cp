// https://codeforces.com/contest/1486/submission/185270980

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
 
const int mxN = 2e5;
ll n, k, a[mxN+1];
bool check(ll m) {
    vector<ll> p(n);
    for (int i = 0; i < n; ++i) {
        if (a[i] < m) p[i] = -1;
        else p[i] = 1;
        if (i > 0) p[i] = p[i] + p[i-1];
    }
 
    ll mx = p[k-1], mn = 0;
    for (int i = k; i < n; ++i) {
        mn = min(mn, p[i-k]);
        mx = max(mx, p[i] - mn);
    }
 
    return mx > 0;
}
void solve() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    ll l = 1, r = n + 1;
    while (r - l > 1) {
        ll m = l + (r - l) / 2;
        if (check(m)) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << l << '\n';
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int tt = 1;
    // cin >> tt;
    while (tt--) solve();
}