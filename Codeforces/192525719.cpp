// https://codeforces.com/contest/1642/submission/192525719

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
	int n, x;
	cin >> n >> x;
	multiset<int> p;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		p.insert(a);
	}
 
	int ans = 0;
	while (!p.empty()) {
		int k = *p.begin();
		if (p.find(k * x) == p.end()) {
			p.erase(p.find(k));
			ans++;
		} else {
			p.erase(p.find(k * x));
			p.erase(p.find(k));
		}
	}
	cout << ans << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
 