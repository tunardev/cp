// https://codeforces.com/contest/1762/submission/185384281

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
 
const int MOD = 998244353;
ll binpow(ll a, ll b) {
    a %= MOD;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
void solve() {
    ll n, count = 0, ans = 1;
    string s;
    cin >> n >> s;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i-1]) {
            count++;
        } else count = 0;
 
        ll a = binpow(2, count) % MOD;
        ans += a, ans %= MOD;
    }
    cout << ans << '\n';
}
 
int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}