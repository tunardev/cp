// https://codeforces.com/contest/1111/submission/191438313

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
int n, k, A, B;
vector<int> a;
int solve(int L, int R) {
	if (L > R) return 0;
 
	int p = upper_bound(a.begin(), a.end(), R) - lower_bound(a.begin(), a.end(), L);
	if (p == 0) return A;
	if (L + 1 == R) return B * (R - L);
 
	int mid = (L + R) >> 1;	
	return min(B * (R - L + 1) * p, solve(L, mid) + solve(mid + 1, R));
}
 
int main() {
    cin >> n >> k >> A >> B;
    a.resize(k);
	for (int i = 0; i < k; ++i) {
		cin >> a[i];
	}
 
	sort(a.begin(), a.end());
	cout << solve(1, (1 << n)) + 2 << endl;
}
 