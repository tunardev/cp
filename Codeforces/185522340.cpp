// https://codeforces.com/contest/1767/submission/185522340

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
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll res = a[0];
    for (int i = 1; i < n; ++i) {
        if (res < a[i]) {
            res = res + ((a[i] - res + 1) / 2);
        }
    }
    cout << res << '\n';
}
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}