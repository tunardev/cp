// https://codeforces.com/contest/908/submission/191624425

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
int n, m, dx, dy;
string s;
vector<vector<char>> arr;
int check(int a, int b, int c, int d) {
	int x = dx, y = dy;
	vector<pair<char, int>>p{
		{'0', a}, {'1', b}, 
		{'2', c}, {'3', d}
	};
	for (int i = 0; i < s.size(); ++i) {
		for (int j = 0; j < p.size(); ++j) {
			if (s[i] == p[j].first) {
				if (p[j].second == 0) x++;
				if (p[j].second == 1) y++;
				if (p[j].second == 2) x--;
				if (p[j].second == 3) y--;
			}
		}
 
		if (x < 0 || y < 0 || x >= n || y >= m || arr[x][y] == '#') return 0;
		if (arr[x][y] == 'E') return 1;
	}
 
	return 0;
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
	cin >> n >> m;
	arr.resize(n, vector<char>(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> arr[i][j];
			if (arr[i][j] == 'S') {
				dx = i;
				dy = j;
			}
		}
	}
 
	cin >> s;
	vector<int> p{0, 1, 2, 3};
	
	ll ans = 0;
	do {
		ans += check(p[0], p[1], p[2], p[3]);
	} while (next_permutation(p.begin(), p.end()));
	cout << ans << endl;
}