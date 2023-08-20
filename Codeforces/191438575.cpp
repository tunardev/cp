// https://codeforces.com/contest/1111/submission/191438575

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
ll n, k, A, B;
vector<ll> a;
ll solve(ll L, ll R) {
	if (L > R)
		return 0;
 
	ll p = upper_bound(a.begin(), a.end(), R) - lower_bound(a.begin(), a.end(), L);
	if (p == 0) return A;
	if (L == R) return B * p;
 
	ll mid = (L + R) >> 1;
	return min(B * (R - L + 1) * p, solve(L, mid) + solve(mid + 1, R));
}
 
int main() {
	cin >> n >> k >> A >> B;
	a.resize(k);
	for (int i = 0; i < k; ++i) {
		cin >> a[i];
	}
 
	sort(a.begin(), a.end());
	cout << solve(1, (1 << n)) << endl;
}