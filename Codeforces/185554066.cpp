// https://codeforces.com/contest/1604/submission/185554066

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
 
void solve() {
    ll n, mx = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        mx = max(mx, a - i + 1);
    }
    cout << mx << '\n';
}
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}