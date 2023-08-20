// https://codeforces.com/contest/1762/submission/185338927

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
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        mx = max(a[i], mx);
    }
 
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; ++i) {
        if ((mx - a[i]) != 0) v.push_back({i, mx-a[i]});
    }
 
    cout << v.size() << "\n";
    for (int i = 1; i <= v.size(); ++i) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}
int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}