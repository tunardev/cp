// https://codeforces.com/contest/1771/submission/184871827

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned ll
#define ar array
#define mod (int)(1e9 + 7)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define INF 0x3f3f3f3f
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll mx = 0, mn = INF;
        unordered_map<ll, ll> mp;
        for (int i = 1; i <= n; ++i) {
            ll a;
            cin >> a;
            mx = max(mx, a);
            mn = min(mn, a);
            mp[a]++;
        }
        if (mx == mn) cout << (mp[mx]-1)*(mp[mx])<<'\n';
        else cout << (2*mp[mn]*mp[mx])<<'\n';
    }
}