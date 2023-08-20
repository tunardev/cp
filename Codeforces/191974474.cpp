// https://codeforces.com/contest/1791/submission/191974474

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
int digitsum(int n) {
	int sum = 0;
	while (n) {
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}
 
void solve() {
	int n;
	cin >> n;
	
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
}