// https://codeforces.com/contest/1352/submission/185216855

#include <bits/stdc++.h>
using namespace std;
 
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define ll long long 
 
int main() {
    ll tt;
    cin >> tt;
    while (tt--) {
        ll x, y, z;
        cin >> x >> y >> z;
        string s;
 
        if (y == 0) {
            if (x)
                fr(i, x + 1) s += '0';
            if (z)
                fr(i, z + 1) s += '1';
            cout << s << '\n';
        } else {
            fr(i, x + 1) s += '0';
            fr(i, z + 1) s += '1';
            y--;
            fr1(i, y) if (i%2) s += '0';
            else s += '1';
            cout << s << '\n';
        }
    }
}