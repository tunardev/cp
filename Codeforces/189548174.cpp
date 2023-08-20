// https://codeforces.com/contest/1618/submission/189548174

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define endl '\n'
 
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<ll> v(a.begin(), a.begin() + 2);
        for (int i = 0; i < n; ++i) {
            v[i%2] = gcd(v[i%2], a[i]);
        }
 
        vector<bool> c(2, true);
        for (int i = 0; i < n; ++i) {
            c[i%2] = c[i%2] && (a[i] % v[(i%2) ^ 1] > 0);
        }
        ll ans = 0;
        for (int i = 0; i < 2; ++i) {
            if (c[i]) ans = max(ans, v[i^1]);
        }
        cout << ans << endl;
    }
}