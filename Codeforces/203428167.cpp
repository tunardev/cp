// https://codeforces.com/contest/1822/submission/203428167

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
const long long INF = 1e18;
 
const int MAX = 1e6 + 1;
 
vector<ll> sieve[MAX];
void compute() {
    for (int i = 1; i < MAX; ++i) {
        for (int j = i; j < MAX; j += i) {
            sieve[j].push_back(i);
        }
    }
}
 
void solve() {
    ll n;
    cin >> n;
    map<ll, ll> cnt;
    set<ll> s;
    for (int i = 0, a; i < n; ++i) {
        cin >> a;
        s.insert(a);
        cnt[a]++;
    }
 
    ll ans = 0;
    for (auto p: s) {
        for (int x: sieve[p]) {
            if (!cnt.count(p / x)) continue;
            ll b = p / x;
 
            if (!cnt.count(b / x)) continue;
            ll a = b / x;
 
            if (a * x != b || b * x != p) continue;
 
            if (a == b && b == p) {
                ans += (cnt[a] - 1) * (cnt[a] - 2) * cnt[a];
            } else if (a == b) {
                ans += (cnt[a] - 1) * cnt[a] * cnt[p]; 
            } else if (a == p) {
                ans += (cnt[a] - 1) * cnt[a] * cnt[b];
            } else if (b == p) {
                ans += (cnt[b] - 1) * cnt[a] * cnt[b];
            } else {
                ans += (cnt[b] * cnt[a] * cnt[p]);
            }
        }
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    compute();
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}