// https://codeforces.com/contest/1656/submission/188905526

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
        ll n;
        cin >> n;
        ll p = n;
        while (!(p & 1)) p >>= 1;
        if (p == 1) cout << "-1\n";
        else cout << min(p, (n << 1) / p) << "\n";
    }
}