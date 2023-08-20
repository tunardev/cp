// https://codeforces.com/contest/1352/submission/185213263

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
    ll n, ans = 0;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }
 
    for (int i = 0; i < n; ++i) {
        ll sum = 0;
        for (int j = i; j < n; ++j) {
            sum += a[j];
            if (i == j) continue;
            if (sum <= n) {
                ans += mp[sum];
                mp[sum] = 0;
            }
        }
    }
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    ll tt;
    cin >> tt;
    while (tt--) solve();
}