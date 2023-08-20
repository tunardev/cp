// https://codeforces.com/contest/1352/submission/185208510

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
 
    ll l = 1, r = 2*k;
    while (r > l) {
        ll m = (l + r) << 1;
        if (m - (m / n) <= k) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    cout << l << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    ll tt;
    cin >> tt;
    while (tt--) solve();
}