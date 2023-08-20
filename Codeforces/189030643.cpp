// https://codeforces.com/contest/1775/submission/189030643

#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int tt;
    cin >> tt;
    while (tt--) {
        ll n, x;
        cin >> n >> x;
        if ((n&x) != x) cout << "-1\n";
        else {
            ll ans = n;
            while (n > x) {
                ans = (n + (n & (-n)));
                n &= ans;
            }
            cout << ans << "\n";
        }
    }
}