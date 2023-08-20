// https://codeforces.com/contest/1352/submission/185215394

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
    ll x, y, z;
    cin >> x >> y >> z;
 
    string s = "";
    if (x != 0) {
        for (int i = 0; i <= x; ++i) s += "0";
    } 
    if (z != 0) {
        for (int i = 0; i <= z; ++i) s += "1";
    }
    if (y != 0) {
        for (int i = 0; i < y - 2; ++i) {
            if (i % 2 == 0) {
                s += "0";
            } else {
                s += "1";
            }
        }
    }
    cout << s << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    ll tt;
    cin >> tt;
    while (tt--) solve();
}