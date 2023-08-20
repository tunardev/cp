// https://codeforces.com/contest/353/submission/202939147

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
const long long INF = 1e18;
 
void solve() {
    ll n;
    string s;
    cin >> n;
    vector<ll> a(n + 1), pref(n + 1), pref1(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
    }
    cin >> s;
    s = '$' + s;
 
    ll ans = 0;
    for (int i = n; i; --i) {
        if (s[i] == '1') ans += a[i];
        pref1[i] = ans;
    }
    for (int i = n; i; --i) {
        if (s[i] == '1') ans = max(ans, pref[i] + pref1[i+1]);
    }
    cout << ans << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}