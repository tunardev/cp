// https://codeforces.com/contest/1791/submission/192026281

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
	ll n, c;
	cin >> n >> c;
	vector<ll> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		a[i] += (i + 1);
	}
	sort(a.begin(), a.end());
 
	bool ok = false;
	for (int i = 0; i < n; ++i) {
		if (c < a[i]) {
			cout << i << endl;
			ok = true;
			break;
		}
		c -= a[i]; 
	}
	if (!ok) cout << n - 1 << endl;
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