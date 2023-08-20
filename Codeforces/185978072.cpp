// https://codeforces.com/contest/1763/submission/185978072

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
    for (ll &k: a) {
        cin >> k;
    }
    
    ll x = a[0], y = a[0];
    for (ll &k: a) {
        x |= k;
        y &= k;
    }
    cout << x - y << "\n";
} 
 
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}
 