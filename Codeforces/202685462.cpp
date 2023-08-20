// https://codeforces.com/contest/1675/submission/202685462

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
const long long INF = 1e18;
 
const int MAX = 2e5 + 1;
 
vector<vector<int>> comps;
vector<int> adj[MAX], component;
 
void dfs(int src) {
    component.push_back(src);
    for (auto d: adj[src]) {
        dfs(d);
    }
 
    if (adj[src].size() == 0) {
        comps.push_back(component);
        component.clear();
    }
}
void solve() {
    int n, d;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int p;
        cin >> p;
        if (p == i) d = i;
        else adj[p].push_back(i);
    }
 
    dfs(d);
    for (int i = 0; i < comps.size(); ++i) {
        cout << comps[i].size() << endl;
        for (int j = 0; j < comps[i].size(); ++j) {
            cout << comps[i][j] << " ";
        }
        cout << endl;
    }
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