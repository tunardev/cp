// https://codeforces.com/contest/915/submission/191425783

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    ll n, pos, l, r;
    cin >> n >> pos >> l >> r;
    if (l > 1 && r < n) {
        ll a = 0, b = 0;
        a += abs(pos - l);
        b += abs(pos - r);
        a += abs(l - r);
        b += abs(l - r);
 
        cout << min(a, b) + 2;
    } else if (l == 1 && r < n) cout << abs(pos - r) + 1;
    else if (l > 1 && r == n) cout << abs(pos - l) + 1;
    else cout << 0;
    
    cout << endl;
}