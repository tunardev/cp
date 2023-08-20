// https://codeforces.com/contest/1066/submission/203070270

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
const long long INF = 1e18;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    ll q, l = 0, r = 0;
    cin >> q;
    vector<ll> d(2e5 + 1);
    
    for (int i = 1; i <= q; ++i) {
        char option;
        ll k;
        cin >> option >> k;
 
        if (i == 1) {
            d[k] = l;
            l--;
            r++;
        } else if (option == 'L') {
            d[k] = l;
            l--;
        } else if (option == 'R') {
            d[k] = r;
            r++;
        } else if (option == '?') cout << min(abs(d[k] - l), abs(d[k] - r)) - 1 << endl;
    }
}