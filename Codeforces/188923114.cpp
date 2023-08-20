// https://codeforces.com/contest/1775/submission/188923114

#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
const int MAX = 3e5;
 
int n, s, t, sieve[MAX+1], parent[MAX+1];
vi adj[MAX+1];
 
void init_sieve() {
    for (int i = 0; i <= MAX; ++i) {
        sieve[i] = i;
    }
    for (int i = 2; i * i < MAX; i++) {
        if (sieve[i] == i) {
            for (int j = i * i; j < MAX; j += i) {
                sieve[j] = i;
            }
        }
    }
}
void bfs(vector<int> a) {
    vector<bool> visited(n+1);
    memset(parent, -1, sizeof(parent));
    queue<int> q;
 
    q.push(s);
    parent[s] = 0;
 
    bool ok = 0;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
 
        int k = a[v];
        while (k != 1) {
            int u = sieve[k];
            while (k % u == 0) k /= u;
 
            if (visited[u]) continue;
            for (int i = 0; i < adj[u].size(); ++i) {
                if (adj[u][i] == t) {
                    parent[t] = v;
                    ok = 1;
                    break;
                } else if (parent[adj[u][i]] == -1) {
                    parent[adj[u][i]] = v;
                    q.push(adj[u][i]);
                }
            }
            visited[u] = true;
        }
 
        if (ok) break;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    init_sieve();
 
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        
        int p = a[i];
        while (p != 1) {
            int u = sieve[p];
            adj[u].push_back(i);
 
            while (p % u == 0) p /= a[i];
        }
    }
    cin >> s >> t;
    if (s == t) {
        cout << "1\n" << s << "\n";
        return 0;
    }
    if (a[s] == 1) {
        cout << "-1\n";
        return 0;
    }
 
    bfs(a);
    if (parent[t] == -1) {
        cout << "-1\n";
    } else {
        vector<int> p;
        int c = parent[t];
        p.push_back(t);
        while (s != c) {
            p.push_back(c);
            c = parent[c];
        }
        if (t != s) p.push_back(s);
 
        cout << p.size() << "\n";
        for (int i = p.size()-1; ~i; --i) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
}