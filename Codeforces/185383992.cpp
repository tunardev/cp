// https://codeforces.com/contest/1762/submission/185383992

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
 
const int MOD = 998244353;
 
ll binpow(ll a, ll b) {
    if (b == 0) return 1;
    ll res = binpow(a, b / 2);
    if (b % 2) return res * res * a;
    else return res * res;
}
void solve() {
    ll n, ans = 1, count = 0;
    string s;
    cin >> n >> s;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i-1]) count++;
        else count = 0;
 
        ll a = binpow(2, count);
        a = a % MOD;
        ans += a;
        ans = ans % MOD;
    }
    cout << ans << '\n';
}
int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}