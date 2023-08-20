// https://codeforces.com/contest/1822/submission/203352176

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
const long long INF = 1e18;
 
const int MAX = 2e5 + 5;
 
ll n, k, c;
vector<ll> adj[MAX];
vector<ll> bfs(ll src) {
    queue<ll> q;
    vector<ll> dist(n + 5, -1);
    q.push(src);
    dist[src] = 0;
 
    while (!q.empty()) {
        ll u = q.front();
        q.pop();
        for (ll p: adj[u]) {
            if (dist[p] == -1) {
                dist[p] = dist[u] + 1;
                q.push(p);
            }
        }
    }
    return dist;
}
void solve() {
    cin >> n >> k >> c;
    for (ll i = 1, u, v; i < n; ++i) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    vector<ll> d = bfs(1);
    ll a = max_element(d.begin(), d.end()) - d.begin();
    vector<ll> d1 = bfs(a);
    ll b = max_element(d1.begin(), d1.end()) - d1.end();
    vector<ll> d2 = bfs(b);
 
    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans = max(ans, k * max(d1[i], d2[i]) - c * d[i]);
        adj[i].clear();
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}