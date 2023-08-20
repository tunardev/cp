// https://codeforces.com/contest/378/submission/189561827

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define endl '\n'
 
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
 
const int MAX = 501;
char adj[MAX][MAX];
int n, m, k, visited[MAX][MAX];
void dfs(int i, int j) {
    visited[i][j] = 1;
    for (int p = 0; p < 4; ++p) {
        int x = i + dx[p], y = j + dy[p];
        if (x > 0 && y > 0 && x <= n && y <= m && !visited[x][y] && adj[x][y] == '.') {
            dfs(x, y);
        }
    }
 
    if (k > 0) {
        k--;
        adj[i][j] = 'X';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> adj[i][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (adj[i][j] == '.') dfs(i, j);
        }
    }
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << adj[i][j];
        }
        cout << endl;
    }
}