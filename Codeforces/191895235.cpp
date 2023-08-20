// https://codeforces.com/contest/1791/submission/191895235

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'    
 
void solve() {
	int n;
	string s;
	cin >> n >> s;
 
	int i = 0, j = n - 1, res = 0;
	while (true) {
		if (s[i] != s[j]) {
			j--;
			i++;
			res += 2;
		} else break;
	}
	cout << max(0, j - i + 1) << endl;
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