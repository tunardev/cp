// https://codeforces.com/contest/300/submission/189008721

#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
int adj[49][49], visited[49];
vector<vi> res[3];
vi component;
void dfs(int n, int src) {
    visited[src] = 1;
    component.push_back(src);
 
    for (int i = 1; i <= n; ++i) {
        if (!visited[i] && adj[src][i] == 1) {
            dfs(n, i);
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a][b] = adj[b][a] = 1;
    }
 
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            component.clear();
            dfs(n, i);
 
            if (component.size() > 3) {
                cout << "-1\n";
                return 0;
            } else {
                res[(int)component.size() - 1].push_back(component);
            }
        }
    }
    if (res[1].size() > res[0].size()) {
        cout << "-1\n";
        return 0;
    }
 
    for (int i = 0; i < res[2].size(); ++i) {
        for (int j = 0; j < res[2][i].size(); ++j) {
            cout << res[2][i][j] << " ";
        }
        cout << "\n";
    }
    
    while (res[1].size() != 0) {
        cout << res[1].back()[0] << " " << res[1].back()[1] << " " << res[0].back()[0] << "\n";
        res[1].pop_back();
        res[0].pop_back();
    }
 
    int count = 0;
    for (int i = 0; i < res[0].size(); ++i) {
        count++;
 
        cout << res[0][i][0] << " ";
        if (count == 3) {
            count = 0;
            cout << "\n";
        }
    }
}