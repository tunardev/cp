// https://codeforces.com/contest/161/submission/189177004

#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define inf 0x3F3F3F3F
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<pair<ll, ll>> a(n + 1), b(m + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (int i = 1; i <= m; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    int l = 1, r = 1;
    vector<pair<int, int>> p;
    while (l <= n and r <= m) {
        if (a[l].first - x <= b[r].first and a[l].first + y >= b[r].first) {
            p.push_back({a[l].second, b[r].second});
            l++;
            r++;
        } else if (a[l].first - x > b[r].first) {
            r++;
        } else {
            l++;
        }
    }
 
    cout << p.size() << "\n";
    for (int i = 0; i < p.size(); ++i) {
        cout << p[i].first << " " << p[i].second << "\n";
    }
}