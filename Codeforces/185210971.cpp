// https://codeforces.com/contest/1352/submission/185210971

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define mod (int)(1e9 + 7)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define INF 0x3f3f3f3f
 
void solve() {
    ll n;
    cin >> n;
 
    if (n <= 3) {
        cout << "-1\n";
        return;
    }
 
    vector<ll> ans;
    ll k = n / 2, sum = 1, sum1 = 2;
 
    if (n % 2) k++;
    for (int i = 0; i < k; ++i) {
        ans.push_back(sum);
        sum += 2;
    }
    reverse(ans.begin(), ans.end());
 
    if (n % 2) k--;
    for (int i = 0; i < k; ++i) {
        ans.push_back(sum1);
        sum1 += 2;
    }
 
    for (int i = 0; i < ans.size() - 1; ++i) {
        if (ans[i] == 2 && ans[i+1] == 4) {
            swap(ans[i], ans[i+1]);
            break;
        }
    }
 
    for (auto u: ans) {
        cout << u << " ";
    }
    cout << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    ll tt;
    cin >> tt;
    while (tt--) solve();
}