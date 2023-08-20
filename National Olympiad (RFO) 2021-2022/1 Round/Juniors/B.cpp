#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 2; ++i) {
        if (s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C') {
            ans++;
        }
    }
    cout << ans << '\n';
}