// https://codeforces.com/contest/1475/submission/189565808

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define endl '\n'
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        while (!(n & 1)) n >>= 1;
        if (n == 1) cout << "NO\n";
        else cout << "YES\n";
    }
}