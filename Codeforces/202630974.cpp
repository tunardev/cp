// https://codeforces.com/contest/448/submission/202630974

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
const long long INF = 1e18;
 
int n, m, k;
bool check(ll mid) {
    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += min((ll)m, mid/i);
    }
    return ans >= k;
}
void solve() { 
    cin >> n >> m >> k;
 
    ll l = 1, r = INF;
    while (r > l) {
        ll m = l + (r - l) / 2;
        if (check(m)) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    cout << l << endl;
}
 
int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}