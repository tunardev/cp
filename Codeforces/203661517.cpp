// https://codeforces.com/contest/1037/submission/203661517

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
const long long INF = 1e18;
 
const int MAX = 2e5 + 1;
 
vector<ll> adj[MAX], r[MAX];
ll d[MAX], par[MAX], c[MAX], w[MAX];
 
void dfs(int src, int p) {
    c[d[src]]++;
    par[src] = p;
    for (auto u: adj[src]) {
        if (u == p) continue;
        r[src].push_back(u);
        d[u] = d[src] + 1;
        dfs(u, src);
    }
}
 
void solve() {  
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    for (int i = 1, u, v; i < n; ++i) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
 
    d[1] = 1;
    dfs(1, 0);
    vector<ll> pref(n + 1);
    for (int i = 1; i <= n; ++i) {
        pref[i] = pref[i-1] + c[i];
    }
 
    queue<ll> q;
    q.push(1);
    while (!q.empty()) {
        int u = q.front(), count = 0;
        q.pop();
        int p = pref[d[u]] + w[d[u] + 1];
        w[d[u] + 1] += r[u].size();
        for (int i = p + 1; i <= n; ++i) {
            if (par[a[i]] != u) break;
            count++;
        }
 
        if (count != r[u].size()) {
            cout << "NO" << endl;
            return;
        }
        for (int i = p + 1; i <= n; ++i) {
            if (par[a[i]] != u) break;
            q.push(a[i]);
        }
    }
    cout << "YES" << endl;
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