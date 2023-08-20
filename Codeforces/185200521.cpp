// https://codeforces.com/contest/1579/submission/185200521

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
    deque<int> q;
    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        if (q.empty()) {
            q.push_back(a);
            continue;
        }
        if (q.front() > a) q.push_front(a);
        else q.push_back(a);
    }
 
    for (auto u: q) cout << u << ' ';
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    ll tt;
    cin >> tt;
    while (tt--) solve();
}