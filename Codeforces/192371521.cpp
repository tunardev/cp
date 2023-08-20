// https://codeforces.com/contest/1786/submission/192371521

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
	ll n, w, h;
	cin >> n >> w >> h;
	vector<ll> a(n), b(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}
 
	ll l = -1e9, r = 1e9;
	for (int i = 0; i < n; ++i) {
		l = max(l, (a[i] - w) - (b[i] - h)); 
		r = min(r, (a[i] + w) - (b[i] + h));
	}
	cout << (l <= r ? "YES" : "NO") << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
	int tt;
	cin >> tt;
	while (tt--) {
		solve();
	}
}