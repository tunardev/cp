// https://codeforces.com/contest/1772/submission/185849946

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f
 
void solve() {
    ll k, n;
    cin >> k >> n;
    if (k&1) n--;
 
    ll mx = n;
    ll f = 1;
    vector<ll> ans;
    while (ans.size() != k) {
        if (ans.size() == 0) {
            ans.push_back(mx);
        } else {
            ans.push_back(mx);
        }
        mx -= f, f++;
        if (mx <= 0) {
            for (int i = 0; i < ans.size() - k; ++i) {
                ans.push_back(1);
            }
            break;
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto u: ans) {
        cout << u << " ";
    }
    cout << "\n";
} 
int main() {
    int tt = 1;
    //cin >> tt;
    while (tt--) solve();
}
 