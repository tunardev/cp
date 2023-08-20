// https://codeforces.com/contest/474/submission/192523691

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
struct node {
    int x, k, y;
    node() {
        x = 0, y = 0, k = inf;
    }
    node(int xx, int v, int yy) {
        x = xx, k = v, y = yy;
    }
};
typedef struct node Node;
 
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}
 
Node operator + (Node a, Node b) {
	if (a.k == b.k) {
		return Node(gcd(a.x, b.x), a.k, a.y + b.y);
	}
	if (a.k > b.k) {
		return {gcd(a.x, b.x), b.k, b.y};
	}
	return {gcd(a.x, b.x), a.k, a.y};
}
 
struct segmentTree {
	int n;
	vector<Node> st;
	segmentTree(int size) {
		n = size;
		st.resize((n << 1) + 1);
	}
 
	void update(int pos, int val) {
		pos = pos + n - 1;
		st[pos] = Node(val, val, 1);
		for (int i = pos; i >= 1; i >>= 1) {
			st[i >> 1] = st[i] + st[i ^ 1];
		}
	}
 
	Node query(int l, int r) {
		Node resl, resr;
		for (l += n - 1, r += n; l < r; l >>= 1, r >>= 1) {
			if (l & 1) resl = resl + st[l++];
			if (r & 1) resr = resr + st[--r];
		}
		return resl + resr;
	}
};
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
	int n, q;
	cin >> n;
	segmentTree st(n + 1);
	for (int i = 1; i <= n; ++i) {
		ll a;
		cin >> a;
		st.update(i, a);
	}
 
	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
 
		Node p = st.query(l, r);
		if (p.x == p.k) cout << r - l + 1 - p.y;
		else cout << r - l + 1;
		cout << endl;
	}
}