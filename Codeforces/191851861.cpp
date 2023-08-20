// https://codeforces.com/contest/1791/submission/191851861

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'    
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
	string a = "codeforces";
	int tt;
	cin >> tt;
	while (tt--) {
		char p;
		cin >> p;
		if (a.find(p) == -1) cout << "NO\n";
		else cout << "YES\n";
	}
}