// https://codeforces.com/contest/161/submission/189078515

#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
int n, k, ans = 0, dp[50001][501];
vector<int> adj[50001];
void dfs(int src, int parent = -1) {
    dp[src][0] = 1;
    for (auto u: adj[src]) {
        if (u != parent) {
            dfs(u, src);
 
            for (int j = 0; j < k; ++j) {
                ans += (dp[src][j] * dp[u][k-j-1]);
            } 
            for (int j = 0; j < k; ++j) {
                dp[src][j] += dp[u][j-1];
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    cin >> n >> k;
    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    cout << ans << "\n";
}