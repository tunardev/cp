// https://codeforces.com/contest/915/submission/191424927

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n, k;
    cin >> n >> k;
 
    int ans = 1e9;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (k % a == 0) ans = min(ans, k / a);
    }
    cout << ans << endl;
}