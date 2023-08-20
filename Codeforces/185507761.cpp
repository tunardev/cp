// https://codeforces.com/contest/1767/submission/185507761

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
 
vector<ll> a(3), b(3);
bool check(int x) {
    if (x == 0) {
        return (((a[1] > a[0] && a[2] < a[0]) || (a[2] > a[0] && a[1] < a[0])) || ((b[1] > b[0] && b[2] < b[0]) || (b[2] > b[0] && b[1] < b[0])));
    } else if (x == 1) {
        return (((a[0] > a[1] && a[2] < a[1]) || (a[2] > a[1] && a[0] < a[1])) || ((b[0] > b[1] && b[2] < b[1]) || (b[2] > b[1] && b[0] < b[1])));
    } else if (x == 2) {
        return (((a[0] > a[2] && a[1] < a[2]) || (a[1] > a[2] && a[0] < a[2])) || ((b[0] > b[2] && b[1] < b[2]) || (b[1] > b[2] && b[0] < b[2])));
    }
    return 0;
}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 3; ++i) {
            cin >> a[i] >> b[i];
        }
 
        bool flag = false;
        for (int i = 0; i < 3; ++i) {
            if (check(i)) {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}