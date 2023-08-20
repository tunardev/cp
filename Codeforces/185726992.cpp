// https://codeforces.com/contest/1325/submission/185726992

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f
 
void solve() {
    ll x;
    cin >> x;
    cout << 1 << " " << x - 1 << "\n";
}
 
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}