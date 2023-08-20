// https://codeforces.com/contest/1753/submission/191841567

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'    
 
void solve() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
 
	if (n & 1) {
		cout << -1 << endl;
		return;
	}
 
	vector<pair<int, int>> ans;
	for (int i = 1; i <= n; i += 2) {
		if (a[i] == a[i+1]) ans.push_back({i, i+1});
		else {
			ans.push_back({i, i});
			ans.push_back({i+1, i+1});
		}
	}
	
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i].first << " " << ans[i].second << endl;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t;
	cin >> t;
	while (t--)
		solve();
}