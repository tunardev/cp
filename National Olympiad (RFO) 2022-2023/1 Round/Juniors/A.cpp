#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    int ans = 1, n = s.size(), x = -1, last;
    string b = "AIOEUY";
    for (int i = 0; i < n; ++i) {
        if (b.find(s[i]) != -1) {
            ans = max(ans, i - x);
            x = i;
        }
    }
    ans = max(ans, n - x);
    cout << ans << '\n';
}