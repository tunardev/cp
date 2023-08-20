// https://codeforces.com/contest/1778/submission/191588006

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
	ll n, m, d;
	cin >> n >> m >> d;
	vector<ll> a(n), b(n);
	unordered_map<ll, ll> ind;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		ind[a[i]] = i;
	}
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
	}
 
	ll ans = 1e9;
	for (int i = 1; i < m; ++i) {
		if (ind[b[i-1]] > ind[b[i]]) {
			ans = 0;
			break;
		} else {
			ll p = ind[b[i]] - ind[b[i-1]];
			if (n > (d + 1)) {
				ans = min(ans, max(d - (p - 1), 0LL));
			}
			ans = min(ans, p);
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
	while (t--) 
		solve();
}