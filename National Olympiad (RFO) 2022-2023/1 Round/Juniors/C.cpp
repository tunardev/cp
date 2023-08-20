#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int ans = 1, x = 1;
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; ++i) {
        x = max(x, mp[a[i]]);

        mp[a[i]] = i + 1;
        ans = max(ans, i - x + 1);
    } 
    cout << ans << '\n';
}
