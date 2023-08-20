// https://codeforces.com/contest/1681/submission/189143965

#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
ll n, x;
map<ll, ll> d;
int bfs() {
    queue<ll> q;
    q.push(x);
    d[x] = 0;
    while (!q.empty()) {
        ll a = q.front();
        q.pop();
 
        string s = to_string(a);
        if (s.size() == n) return d[a];
        for (char p: s) {
            if (p != '0') {
                ll c = a * (p - '0');
                if (d.count(c) == 0) {
                    d[c] = d[a] + 1;
                    q.push(c);
                }
            }
        }
    }
 
    return -1;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    cin >> n >> x;
    cout << bfs() << '\n';
}