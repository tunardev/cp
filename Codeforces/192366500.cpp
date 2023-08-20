// https://codeforces.com/contest/1786/submission/192366500

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
	ll n;
	cin >> n;
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	for (int i = 0; i < n; ++i) {
		ll p;
		cin >> p;
		pq.push(p);
	}
 
	ll k = 1, ans = 0;
	while (!pq.empty()) {
		ll a = pq.top();
		if (a == k) {
			while (!pq.empty() && pq.top() == k) {
				pq.pop();
			}
		} else {
			ans += (a - k);
			pq.pop();
		}
		k++;
	}
 
	cout << ans << endl;
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