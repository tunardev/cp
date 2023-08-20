// https://codeforces.com/contest/1791/submission/192024490

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
	int n, c;
	cin >> n >> c;
	vector<ll> a(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		a[i] += i;
	}
	sort(a.begin(), a.end());
 
	bool ok = false;
	for (int i = 1; i <= n; ++i) {
		if (c < a[i]) {
			cout << i - 1 << endl;
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