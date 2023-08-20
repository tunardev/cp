// https://codeforces.com/contest/1782/submission/189504225

#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define inf 0x3F3F3F3F
#define endl '\n'
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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(all(a));
 
        int ans = 1, count0 = count(all(a), 0);
        for (int i = 0; i < n - 1; ++i) {
            if (i + 1 > a[i] && i + 1 < a[i + 1]) {
                ans++;
            }
        }
        count0 =! count0;
        cout << ans + count0 << endl;
    }
}
 