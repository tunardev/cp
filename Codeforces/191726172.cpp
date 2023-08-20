// https://codeforces.com/contest/1778/submission/191726172

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
 
	set<char> c;
	vector<char> ch;
	map<char, int> cnt;
	for (int  i = 0; i < n; ++i) {
		c.insert(a[i]);
	}
	for (char p: c) {
		cnt[p] = ch.size();
		ch.push_back(p);
	}
 
	ll ans = 0;
	for (int mask = 0; mask < (1 << ch.size()); ++mask) {
		if (__builtin_popcount(mask) > k) continue;
 
		ll p = 0, d = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i] == b[i] || (mask & (1 << cnt[a[i]]))) p++;
			else {
				d += p * (p + 1) >> 1;
				p = 0;
			}
		}
		d += p * (p + 1) >> 1;
		ans = max(ans, d);
	}
	cout << ans << endl;
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