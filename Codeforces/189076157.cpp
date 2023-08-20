// https://codeforces.com/contest/161/submission/189076157

#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
int dp[51][51];
void dfs(vector<vector<int>> adj, ll k, ll &ans, int src, int parent = -1) {
    dp[src][0] = 1;
    for (auto u: adj[src]) {
        if (u != parent) {
            dfs(adj, k, ans, u, src);
 
            for (int j = 0; j < k; ++j) {
                ans += (dp[src][j] * dp[u][k-j-1]);
            } 
            for (int j = 0; j < k; ++j) {
                dp[src][j] += dp[src][j-1];
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    ll n, k, ans = 0;
    cin >> n >> k;
    vector<vector<int>> adj(n + 1);
    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(adj, k, ans, 1);
    cout << ans << "\n";
}