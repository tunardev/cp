// https://codeforces.com/contest/1772/submission/185832881

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f
 
void solve() {
    vector<vector<int>> a(3, vector<int>(3));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> a[i][j];
        }
    }
 
    for (int j = 0; j < 4; ++j) {
        int z = a[0][0], b = a[0][1], c = a[1][0], d = a[1][1];
        a[0][0] = c;
        a[0][1] = z;
        a[1][0] = d;
        a[1][1] = b;
        if (a[0][0] < a[0][1] && a[1][0] < a[1][1] && a[0][0] < a[1][0] && a[0][1] < a[1][1]) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
} 
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}