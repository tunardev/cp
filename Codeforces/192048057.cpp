// https://codeforces.com/contest/1328/submission/192048057

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
	int x, y;
	cin >> x >> y;
	if (x % y == 0) {
		cout << 0 << endl;
	} else {
		int w = x % y;
		cout << y - w << endl;
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