// https://codeforces.com/contest/1551/submission/185249553

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
    ll n;
    cin >> n;
    if (n % 3 == 0) {
        cout << n / 3 << " " << n / 3;
    } else if (n % 3 == 2) {
        cout << n / 3 << " " << n / 3 + 1;
    } else if (n % 3 == 1) {
        cout << n / 3 + 1 << " " << n / 3;
    }
    cout << '\n';
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