// https://codeforces.com/contest/1810/submission/200366633

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
 
    set<ll> st;
    ll ans = n * c + d;
    for (int i = 0; i < n; ++i) {
        st.insert(a[i]);
        ans = min(ans, (n - (ll)st.size()) * c + (a[i] - (ll)st.size()) * d);
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}