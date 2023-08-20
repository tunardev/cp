// https://codeforces.com/contest/279/submission/189001065

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
 
    int n, t;
    cin >> n >> t;
    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    ll sum = 0;
    int ans = 0, l = 0, r = 0;
    while (l < n) {
        while ((sum + a[r]) <= t && r < n) {
            sum += a[r];
            r++;
        }
        ans = max(ans, r - l);
        sum -= a[l];
        l++;
    }
    cout << ans << "\n";
}