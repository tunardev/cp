// https://codeforces.com/contest/474/submission/189951923

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9+7)
#define endl '\n'
 
int t, k, dp[100001];
void memo() {
    dp[0] = 1;
    for (int i = 1; i < 100001; ++i) {
        dp[i] = (dp[i-1]%mod);
        if (i >= k) {
            dp[i] = (dp[i]%mod + dp[i-k]%mod)%mod;
        }
    }
    for (int i = 1; i < 100001; ++i) {
        dp[i] = (dp[i]%mod + dp[i-1]%mod)%mod;
    }
}
 
int main() {
    cin.tie(0)->ios_base::sync_with_stdio(false);
    cout.tie(0);
    
    cin >> t >> k;
    memo();
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << (dp[b]%mod - dp[a-1]%mod + mod)%mod << endl;
    }
}