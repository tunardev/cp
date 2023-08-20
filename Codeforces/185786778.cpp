// https://codeforces.com/contest/1698/submission/185786778

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f
 
void solve() {
    ll n, pos = 0, neg = 0;
    cin >> n;
    bool flag = false;
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        ll x;
        cin >> x;
        if (!x) flag = true;
        else if (x > 0) {
            pos++;
            a.push_back(x);
        } else {
            neg++;
            a.push_back(x);
        }
    }
    if (flag) a.push_back(0);
 
    if (pos > 2 || neg > 2) {
        cout << "NO\n";
        return;
    } else {
        ll n = a.size();
        unordered_map<ll, bool> mp;
        for (auto u: a) {
            mp[u] = true;
        }
 
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    if (mp.find(a[i] + a[j] + a[k]) == mp.end()) {
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
    }
 
    cout << "YES\n";
} 
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}