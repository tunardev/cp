// https://codeforces.com/contest/1352/submission/185207640

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
    ll n, k;
    cin >> n >> k;
    if (n%2 == k%2 && n >= k) {
        cout << "YES\n";
        for (int i = 1; i < k; ++i) {
            cout << "1 ";
        }
        cout << n - k + 1 << '\n';
    } else if (n%2 == 0 && n >= 2*k) {
        cout << "YES\n";
        for (int i = 1; i < k; ++i) {
            cout << "2 ";
        } 
        cout << n - 2*k + 2 << '\n';
    } else cout << "NO\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    ll tt;
    cin >> tt;
    while (tt--) solve();
}