// https://codeforces.com/contest/1791/submission/191965304

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
const int MAX = 2e5;
 
int tree[100001], a[100001];
int fa[1000001];
 
ll st[(MAX << 1) + 1];
 
void update(int pos, int val) {
	for (st[pos += n] = val; pos >> 1;) {
		st[pos] += st[pos * 2] + st[pos * 2 + 1];
	}
}
void update(int pos, T val)
{
	for (s[pos += n] = val; pos /= 2;)
		s[pos] = f(s[pos * 2], s[pos * 2 + 1]);
}
 
ll query(int l, int r)
{
	Node resl, resr;
	for (l += n, r += n; l < r; l >>= 1, r >>= 1)
	{
		if (l & 1)
		{
			resl = resl + t[l++];
		}
		if (r & 1)
		{
			resr = t[--r] + resr;
		}
	}
	return resl + resr;
}
 
int find(int x)
{
	if (fa[x] == x)
		return x;
	return fa[x] = find(fa[x]);
}
 
 
int digitSum(int n)
{
	int sum = 0;
	while (n)
	{
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}
 
void solve()
{
	int n, q;
	cin >> n >> q;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		add(i, a[i]);
		fa[i] = i;
	}
 
	fa[n + 1] = n + 1;
	while (q--)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			cin >> l >> r;
			int i = l;
			for (int i = l; i <= r;
				 add(i, (t = calc(a[i])) - a[i]),
					 a[i] = t,
					 fa[i] = (calc(a[i]) == a[i]) ? i + 1 : i,
					 i = (find(i) == i) ? i + 1 : fa[i])
				;
		}
		else
		{
			int x;
			cin >> x;
			cout << query(x) - query(x - 1) << endl;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
}