// https://codeforces.com/contest/1821/submission/203230814

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
const long long INF = 1e18;
 
void solve() {
    string s;
    cin >> s;
 
    if (s[0] == '0') {
        cout << "0\n";
        return;
    } else if (s.size() == 1 && s[0] != '?') {
        cout << "1\n";
    } else {
        ll ans = 1;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '?') {
                ans *= (i == 0 ? 9 : 10);
            }
        }
        cout << ans << endl;
    }
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