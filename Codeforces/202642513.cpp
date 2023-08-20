// https://codeforces.com/contest/385/submission/202642513

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
const long long INF = 1e18;
 
const int N = 1e7;
vector<int> lp(N+1);
vector<int> pr;
 
void sieve() {
    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
 
        for (int j = 0; i * pr[j] <= N; ++j) {
            lp[i*pr[j]] = pr[j];
            if (pr[j] == lp[i]) {
                break;
            }
        }
    }
}
 
void solve() { 
    int n, q;
    cin >> n;
    vector<int> pref(N + 1), a(n);
    for (int i = 0, a; i < n; ++i) {
        cin >> a;
        while (a > 1) {
            int p = lp[a];
            pref[p]++;
 
            while (lp[a] == p) {
                a /= p;
            }
        }
    }
 
    for (int i = 1; i < (int)pref.size(); ++i) {
        pref[i] = pref[i] + pref[i-1];
    }
 
    cin >> q;
    for (int i = 0, l, r; i < q; ++i) {
        cin >> l >> r;
        l = min(l, N);
        r = min(r, N);
        cout << pref[r] - pref[l-1] << endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    sieve();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}