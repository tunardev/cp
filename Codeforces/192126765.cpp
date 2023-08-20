// https://codeforces.com/contest/1365/submission/192126765

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
 
void bfs(int &n, int &m, vector<vector<char>> &adj, vector<vector<int>> &used) {
	queue<pair<int, int>> q;
	if (adj[n-1][m-1] == '.') {
		q.push({n-1, m-1});
		used[n-1][m-1] = true;
	}
	while (!q.empty()) {
		auto p = q.front();
		q.pop();
 
		for (int k = 0; k < 4; ++k) {
			int x = dx[k] + p.first, y = dy[k] + p.second;
			if (x >= 0 && y >= 0 && x < n && y < m && used[x][y] == 0 && adj[x][y] != '#') {
				q.push({x, y});
				used[x][y] = true;
			}
		}
	}
}
void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<char>> adj(n, vector<char>(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> adj[i][j];
		}
	}
 
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (adj[i][j] == 'B') {
				for (int k = 0; k < 4; ++k) {
					int x = dx[k] + i, y = dy[k] + j;
					if (x >= 0 && y >= 0 && x < n && y < m && adj[x][y] == '.') {
						adj[x][y] = '#';
					}
				}
			}
		}
	}
 
	vector<vector<int>> used(n, vector<int>(m));
	bfs(n, m, adj, used);
 
	bool ok = true;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if ((adj[i][j] == 'G' && used[i][j] == 0) && (adj[i][j] == 'B' && used[i][j])) {
				ok = false;
				break;
			}
		}
	}
	cout << (ok ? "YES" : "NO") << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}