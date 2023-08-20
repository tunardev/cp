// https://codeforces.com/contest/1791/submission/191873873

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'    
 
void solve() {
	int n;
	string a;
	cin >> n >> a;
	pair<int, int> p{0, 0};
	bool ok = false;
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] == 'L') p.first--;
		else if (a[i] == 'R') p.first++;
		else if (a[i] == 'U') p.second++;
		else if (a[i] == 'D') p.second--;
 
		if (p.first == 1 && p.second == 1) ok = true;
	}
 
	if (ok) cout << "YES\n";
	else cout << "NO\n";
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