// https://codeforces.com/contest/1791/submission/191921445

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'    
 
void solve() {
	int n, ans = 0;
	string s;
	cin >> n >> s;
	unordered_set<int> a, b;
	for (int i = 0; i < n; ++i) {
		a.insert(s[i]);
		for (int j = i + 1; j < n; ++j) {
			b.insert(s[j]);
		}
		ans = max(ans, (int)a.size() + (int)b.size());
		b.clear();
	}
	cout << ans << endl;
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