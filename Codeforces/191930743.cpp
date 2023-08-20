// https://codeforces.com/contest/1791/submission/191930743

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'    
 
void solve() {
	int n;
	cin >> n;
	vector<ll> a(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
 
	for (int i = 1; i < n; ++i) {
		if ((a[i] + a[i+1]) < (-a[i] - a[i+1])) {
			a[i] = -a[i];
			a[i+1] = -a[i+1];
		}
	}
 
	ll ans = 0;
	for (int i = 1; i <= n; ++i) {
		ans += a[i];
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