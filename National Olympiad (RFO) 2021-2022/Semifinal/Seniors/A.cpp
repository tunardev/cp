#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, mn = 1e9, mn2 = 1e9, mn3 = 1e9;
    cin >> n >> m;
    vector<int> used(10, 0);
    for (int i = 0; i < n; ++i) {
        int d;
        cin >> d;
        used[d]++;
        mn = min(mn, d);
    }
    for (int i = 0; i < m; ++i) {
        int r;
        cin >> r;
        used[r]++;
        mn2 = min(mn2, r);

        if (used[r] == 2) {
            mn3 = min(mn3, r);
        }
    }
    
    if (mn > mn2) {
        swap(mn, mn2);
    }
    mn3 = min(mn3, 10 * mn + mn2);

    cout << mn3 << '\n';
}