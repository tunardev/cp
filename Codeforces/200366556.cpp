// https://codeforces.com/contest/1810/submission/200366556

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
 
    set<int> st;
    ll ans = n * c + d;
    for (int i = 0; i < n; ++i) {
        st.insert(a[i]);
        ans = min(ans, 1LL * ((n - (int)st.size()) * c + (a[i] - (int)st.size()) * d));
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