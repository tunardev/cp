// https://codeforces.com/contest/1418/submission/201965612

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
	int n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
 
	ll ans = a[0];
	for (int i = 1; i < n; ++i) {
		if (!a[i]) continue;
 
		int j = i;
		while (i < n && a[i]) i++;
		ans += (i - j) / 3;
	}
	cout << ans << endl;
}
 
int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}