// https://codeforces.com/contest/1772/submission/185860893

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
 
    ll x = 1;
    cout << "1 ";
    for (int i = 1; i < k; ++i) {
        if (n - x - i + 1 >= k - i) {
            x += i;
        } else {
            x++;
        }
        cout << x << " ";
    }
    cout << "\n";
} 
 
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
    cerr << "\nTime: " << (clock() * 1000.0 / CLOCKS_PER_SEC) << " ms\n";
}
 