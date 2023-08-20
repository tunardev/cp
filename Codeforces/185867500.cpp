// https://codeforces.com/contest/1772/submission/185867500

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f
 
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll x = -1e18;
    for (int i = 0; i < n-1; ++i) {
        if (a[i] > a[i+1]) {
            ll k = a[i+1] + (a[i] - a[i+1] + 1) / 2;
            x = max(x, k);
        }
    }
    if (x < 0) {
        cout << "0\n";
        return;
    }
    a[0] = abs(a[0] - x);
    for (int i = 1; i < n; ++i) {
        a[i] = abs(a[i] - x);
        if (a[i] < a[i-1]) {
            cout << "-1\n";
            return;
        }
    }
    cout << x << "\n";
} 
 
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
    cerr << "\nTime: " << (clock() * 1000.0 / CLOCKS_PER_SEC) << " ms\n";
}
 