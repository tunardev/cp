// https://codeforces.com/contest/1777/submission/190039404

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9+7)
#define endl '\n'
 
int main() {
    cin.tie(0)->ios_base::sync_with_stdio(false);
    cout.tie(0);
    
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        if (n == 1) cout << 0;
        else {
            ll ans = n * (n - 1);
            for (int i = 2; i <= n; ++i) {
                ans *= i;
                ans %= mod;
            }
            cout << ans;
        }
        cout << endl;
    }
}
 
 