// https://codeforces.com/contest/888/submission/192520014

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
 
	int n;
	string s;
	cin >> n >> s;
 
	int x = 0, y = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'U') y++;
		else if (s[i] == 'D') y--;
		else if (s[i] == 'L') x--;
		else if (s[i] == 'R') x++;
	}
 
	cout << n - abs(x) - abs(y) << endl;
}