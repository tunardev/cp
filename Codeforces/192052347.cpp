// https://codeforces.com/contest/1791/submission/192052347

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
ll digitsum(ll n) {
	ll sum = 0;
	while (n) {
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}
void solve() {
	int n, q;
	cin >> n >> q;
	vector<ll> a(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
 
	set<pair<ll, ll>> s;
	for (int i = 1; i <= n; ++i) {
		s.insert({i, 0});
	}
 
	while (q--) {
		int type;
		cin >> type;
		if (type == 2) {
			int x;
			cin >> x;
			cout << a[x] << endl;
		} else {
			int l, r;
			cin >> l >> r;
			
			if (s.size() != 0) {
				auto it = s.lower_bound({l, -100});
				while (it != s.end() && (*it).first <= r) {
					auto to = *it;
					a[to.first] = digitsum(a[to.first]);
					s.erase(it);
 
					if (to.first < 3) s.insert({to.first, to.second+1});
					it = s.lower_bound({to.first+1, -100});
				}
			}
		}
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