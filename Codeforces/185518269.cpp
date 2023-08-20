// https://codeforces.com/contest/1767/submission/185518269

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
    vector<ll> a(n);
    ll mx = 0, flag = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > mx) {
            mx = a[i];
            flag = 1;
        }
    }
 
    if (flag == 0) {
        cout << a[0] << "\n";
        return;
    }
 
    vector<ll> k(n - 1);
    for (int i = 1; i < n; ++i) {
        k[i - 1] = a[i];
    }
    sort(k.begin(), k.end());
 
    ll x = a[0];
    for (int i = 0; i < n - 1; ++i) {
        if (k[i] > x) {
            ll p = x + k[i];
            if (p&1) x = (p / 2) + 1;
            else x = p / 2;
        }
    }
    cout << x << '\n';
}
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}