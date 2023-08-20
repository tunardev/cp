// https://codeforces.com/contest/1778/submission/191669588

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'    
 
void solve() {
	int n, k;
	string a, b;
	cin >> n >> k >> a >> b;
	
	vector<char> c;
	set<char> visited;
	for (int i = 0; i < n; ++i) {
		if (!visited.count(a[i])) {
			c.push_back(a[i]);
			visited.insert(a[i]);
		}
	}
 
	int ans = 0, l = 0, r = 0;
	while (n > r) {
		if (a[r] == b[r]) r++;
		else {
			ans += (r - l) * (r - l + 1) >> 1;
			l = ++r;
		}
	}
 
	ans += (r - l) * (r - l + 1) >> 1;
	for (int i = 0; i < (1 << (int)c.size()); ++i) {
		set<char> p;
		for (int j = 0; j < c.size(); ++j) {
			if (i & (1 << j)) p.insert(c[j]);
		}
		if (p.size() > k) continue;
 
		string d = a;
		for (int j = 0; j < n; ++j) {
			if (p.count(d[j])) d[j] = b[j];
		}
 
		int count = 0, l = 0, r = 0;
		while (n > r) {
			if (d[r] == b[r]) r++;
			else {
				count += (r - l) * (r - l + 1) >> 1;
				l = ++r;
			}
		}
 
		count += (r - l) * (r - l + 1) >> 1;
		ans = max(ans, count);
	}
	cout << ans << endl;
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cout.tie(nullptr);
 
	int t;
	cin >> t;
	while (t--) 
		solve();
}