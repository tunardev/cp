// https://codeforces.com/contest/1754/submission/185755317

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f
 
void solve() {
    ll n;
    string s;
    cin >> n >> s;
 
    stack<ll> st;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'Q') st.push(s[i]);
        else {
            if (!st.empty()) st.pop();
        }
    }
 
    if (st.empty()) cout << "YES\n";
    else cout << "NO\n";
}
 
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}