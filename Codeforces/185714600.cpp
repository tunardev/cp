// https://codeforces.com/contest/893/submission/185714600

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f
 
const int mxN = 1e5;
ll n, m, visited[mxN+1], val[mxN+1];
vector<ll> adj[mxN+1];
 
ll dfs(ll s) {
    visited[s] = 1;
    ll mn = val[s];
    for (auto u: adj[s]) {
        if (visited[u] == 0) {
            mn = min(mn, dfs(u));
        }
    }    
    return mn;
}
 
void solve() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> val[i];
    }
 
    for (int i = 0; i < m; ++i) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (visited[i] == 0) {
            ans += dfs(i);
        }
    }
    cout << ans << '\n';
}
int main() {
    int tt = 1;
    // cin >> tt;
    while (tt--) solve();
}