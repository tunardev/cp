// https://codeforces.com/contest/1325/submission/185727082

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
    unordered_set<ll> s;
    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << '\n';
}
 
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}