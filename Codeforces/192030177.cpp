// https://codeforces.com/contest/1791/submission/192030177

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
	ll n, c;
	cin >> n >> c;
	vector<ll> a(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		a[i] += i;
	}
	sort(a.begin(), a.end());
 
	ll ans = 0, sum = 0;
	for (int i = 1; i <= n; ++i) {
		if (sum + a[i] > c) break;
		sum += a[i];
		ans++;
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