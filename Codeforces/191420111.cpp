// https://codeforces.com/contest/1760/submission/191420111

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
 
    int count = 0;
    for (int i = 1, l = 1, r = 1; i <= n && l <= n && r <= n; ++i) {
        while (i + 1 <= n && a[l] == a[i + 1]) {
            i++;
            r++;
        }
        i--;
 
        if ((l == 1 || a[l] < a[l - 1]) && (r == n || a[r] < a[r + 1])) count++;
        l = r + 1;
    }
    cout << (count == 1 ? "YES" : "NO") << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) 
        solve();
}