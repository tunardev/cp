// https://codeforces.com/contest/1742/submission/185269801

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
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    for (int i = 0; i < n; ++i) {
        if (s.find(a[i]) != s.end()) {
            cout << "NO\n";
            return;
        }
        s.insert(a[i]);
    }
    cout << "YES\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int tt;
    cin >> tt;
    while (tt--) solve();
}