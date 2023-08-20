// https://codeforces.com/contest/1738/submission/185715235

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f
 
void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for (int i = 0; i < k; ++i) {
        cin >> a[i];
    }
 
    if (k == 1) {
        cout << "YES\n";
        return;
    }
 
    vector<ll> p(k - 1);
    for (int i = 0; i < k - 1; ++i) {
        p[i] = a[i + 1] - a[i];
    }
 
    if (!is_sorted(p.begin(), p.end())) {
        cout << "NO\n";
        return;
    }
 
    if ((n - k + 1) * p[0] >= a[0]) cout << "YES\n";
    else cout << "NO\n";
}
 
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}