// https://codeforces.com/contest/1642/submission/192525787

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
	ll n, x;
	cin >> n >> x;
	multiset<ll> p;
	for (int i = 0; i < n; ++i) {
		ll a;
		cin >> a;
		p.insert(a);
	}
 
	ll ans = 0;
	while (!p.empty()) {
		ll k = *p.begin();
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
 