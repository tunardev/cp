// https://codeforces.com/contest/1619/submission/192530957

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void test_case() {
	int n, k = 0;
	cin >> n;
	vector<int> a(n);
	map<int, int> cnt;
	stack<int> st;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		cnt[a[i]]++;
	}
 
	vector<int> res(n + 1, -1);
	for (int i = 0; i <= n; ++i) {
		res[i] = cnt[i] + k;
		for (int j = 1; j < cnt[i]; ++j) st.push(i);
 
		if (cnt[i] == 0) {
			if (!st.empty()) {
				k += i - st.top();
				st.pop();
			} else break;
		}
	}
	
	for (int i = 0; i < res.size(); ++i) {
		cout << res[i] << " ";
	}
	cout << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int t = 1;
	cin >> t;
	while (t--) {
		test_case();
	}
}
 