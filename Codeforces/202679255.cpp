// https://codeforces.com/contest/61/submission/202679255

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
const long long INF = 1e18;
 
const int N = 1e5 + 1;
 
vector<pair<int, int>> adj[N];
int dfs(int src, int par) {
    int mx = 0;
    for (auto &p: adj[src]) {
        if (p.first == par) continue;
 
        mx = max(mx, p.second + dfs(p.first, src));
    }
 
    return mx;
}
void solve() { 
    ll n, sum = 0;
    cin >> n;
 
    for (int i = 1, x, y, w; i < n; ++i) {
        cin >> x >> y >> w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
        sum += w;
    }
 
    sum /= 2;
    sum -= dfs(1, -1);
    cout << sum << endl; 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
 