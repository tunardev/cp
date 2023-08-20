// https://codeforces.com/contest/1763/submission/186003751

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f
 
const int mxN = 1e5;
ll n, k, a[mxN+1], b[mxN+1];
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
 
void solve() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int j = 0; j < n; ++j) {
        cin >> b[j];
    }
    for (int i = 0; i < n; ++i) {
        pq.push({a[i], b[i]});
    }
 
    int res = k;
    while (pq.size() != 0 && k > 0) {
        while (pq.size() != 0 && pq.top().first <= res) pq.pop();
 
        k = k - pq.top().second;
        res = res + k;
    }
    if (pq.size() == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
        while (pq.size() != 0) pq.pop();
    }
} 
 
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}
 