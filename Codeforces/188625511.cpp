// https://codeforces.com/contest/1712/submission/188625511

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
        int n;
        cin >> n;
        vi a(n);
        map<int, int> cnt;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            cnt[a[i]]++;
        }
 
        bool ok = true;
        for (int i = n - 1; ~i; --i) {
            while (a[i] == a[i-1] && i > 0) {
                cnt[a[i]]--;
                i--;
            }
            if (cnt[a[i]] == 1) {
                cnt.erase(a[i]);
            } else {
                ok = false;
                break;
            }
 
            if (a[i-1] > a[i] && i > 0) {
                ok = false;
                break;
            }
        }
 
        if (ok) cout << "0\n";
        else cout << cnt.size() << "\n";
    }
}