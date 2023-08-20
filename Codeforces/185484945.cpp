// https://codeforces.com/contest/1767/submission/185484945

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
 
int main() {
    ll t;
    cin >> t;
    while (t--) {
        set<int> s;
        for (int i = 0; i < 3; ++i) {
            ll a, b;
            cin >> a >> b;
            s.insert(a);
            s.insert(b);
        }
        cout << (s.size() > 3 ? "YES\n" : "NO\n");
    }
}