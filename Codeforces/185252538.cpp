// https://codeforces.com/contest/1551/submission/185252538

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
    int n, m, k;
    cin >> n >> m >> k;
 
    int j = ((n*m) / 2) - k;
    if (n&1) {
        k -= (m/2);
        if (k < 0) {
            cout << "NO\n";
            return;
        }
    } else if (m&1) {
        j -= (n/2);
        if (j < 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << (((k&1) || (j&1)) ? "NO" : "YES") << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}