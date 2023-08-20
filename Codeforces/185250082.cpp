// https://codeforces.com/contest/1551/submission/185250082

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
    string s;
    cin >> s;
    map<ll, ll> mp;
    for (int i = 0; i < s.size(); ++i) {
        mp[s[i] - 'a']++;
    }
 
    int count = 0, count1 = 0;
    for (auto u: mp) {
        if (u.second == 1) count++;
        else if (u.second > 1) count1++;
    }
    cout << (count1 + count/2) << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}