// https://codeforces.com/contest/1791/submission/191967646

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
    string a = s.substr(0, 1), a1 = s.substr(1, n - 1);
    int sum = 1, sum1 = 0, ans;
    
    set<char> p;
    map<char, int> cnt, cnt1;
    cnt[s[0]] = 1;
    for (char c: a1) {
        p.insert(c);
        cnt1[c]++;
    }
 
    sum1 = p.size();
    for (int i = 1; i < s.size(); ++i) {
        ans = max(ans, sum + sum1);
        a += a1[0];
        if (cnt[a1[0]] == 0) sum++;
        cnt[a1[0]]++;
 
        if (cnt1[a1[0]] == 1) sum1--;
        cnt1[a1[0]]--;
 
        a1.erase(a1.begin());
    }
    cout << ans << endl;
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