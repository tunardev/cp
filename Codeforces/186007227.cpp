// https://codeforces.com/contest/1763/submission/186007227

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int j = 0; j < n; ++j) {
        cin >> b[j];
    }
 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 0; i < n; ++i) {
        pq.push({b[i], a[i]});
    }
 
    int res = k;
    while (k > 0 && pq.size() != 0) {
        while (pq.size() != 0 && pq.top().second <= res) {
            pq.pop();
        }
 
        k -= pq.top().first;
        res += k;
    }
    if (pq.size() == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
} 
 
int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}
 