// https://codeforces.com/contest/1777/submission/190039227

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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
 
        int ans = 0;
        for (int i = 1; i <= n - 1; ++i) {
            if ((a[i] ^ a[i + 1]) % 2 == 0) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
 
 