// https://codeforces.com/contest/1778/submission/191558211

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
	ll n, sum = 0, ans = -1e9;
	cin >> n;
	vector<int> a(n);
	
	cin >> a[0];
	sum += a[0];
	for (int i = 1; i < n; ++i) {
		cin >> a[i];
		if (a[0] + a[i] == -2) ans = 4;
		else if (a[0] + a[i] == 0) ans = max(ans, 0LL);
		else ans = max(ans, -4LL);
 
		sum += a[i];
		a[0] = a[i];
	}
	ans += sum;
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