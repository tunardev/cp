// https://codeforces.com/contest/1762/submission/185385945

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
    vector<pair<ll, ll>> ans;
    for (int i = 1; i <= n; ++i) {
        ll a, x = 1;
        cin >> a;
        while (x < a) {
            x *= 2;
        }
        ans.push_back({i, x-a});
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < n; ++i) {
        cout << ans[i].first << " " << ans[i].second << "\n";
    }
}
 
int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}