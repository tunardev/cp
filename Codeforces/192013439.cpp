// https://codeforces.com/contest/1791/submission/192013439

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
	int n;
	cin >> n;
	vector<ll> a(n), p(n);
	ll sum = 0, d = 0, mn = 1e9;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += abs(a[i]);
		if (abs(a[i]) != a[i]) d++;
 
		a[i] = abs(a[i]);
		mn = min(mn, a[i]);
	}
 
	if (!(d & 1)) {
		cout << sum << endl;
	} else {
		cout << sum - 2 * mn << endl;
	}
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