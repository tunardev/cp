// https://codeforces.com/contest/1762/submission/185385191

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());
 
#define ll long long
#define ull unsigned ll
 
void solve() {
    ll n;
    cin >> n;
    vector<int> a(n+1);
    multimap<ll, ll> mp;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        mp.insert({a[i], i});   
    }
    sort(a.begin(), a.end());
 
    ll x = a[0];
    cout << n << '\n';
    auto find = mp.find(a[0]);
    cout << (*find).second << " " << 0 << "\n";
    for (int i = 1; i < n; ++i) {
        if (a[i]&1) {
            ll k = a[i] / x;
            k++, k *= x;
 
            find = mp.find(a[i]);
            cout << (*find).second << " " << (k - a[i]) << "\n";
            mp.erase(find);
            x = k;
        } else {
            find = mp.find(a[i]);
            cout << (*find).second << " " << 0 << "\n";
            mp.erase(find);
            x = a[i];
        }
    }
 
    
}
 
int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}