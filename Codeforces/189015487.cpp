// https://codeforces.com/contest/493/submission/189015487

#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
int main() {
    int n, m;
    cin >> n;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        p.push_back({a, 1});
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        p.push_back({a, 2});
    }
    sort(p.begin(), p.end());
 
    int x = 0, y = 0;
    pair<int, int> ans = {(n * 3), (m * 3)};
    for (int i = 0; i < (n + m); ++i) {
        if (p[i].second == 1) x++;
        else y++;
 
        if (((n * 3) - x) - ((m * 3) - y) > (ans.first - ans.second)) {
            ans.first = ((n * 3) - x);
            ans.second = ((m * 3) - y);
        }
    }
 
    cout << ans.first << ":" << ans.second << "\n";
}