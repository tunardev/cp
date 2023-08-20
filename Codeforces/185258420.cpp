// https://codeforces.com/contest/1766/submission/185258420

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
 
const int mxN = 1e7+1;
vector<bool> is_prime(mxN, true);
vector<ll> pnumbers;
 
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
void precomp() {
    for (int i = 3; i < sqrt(mxN); i += 2) {
        if (is_prime[i]) {
            for (int j = i*i; j < mxN; j += (2*i)) {
                is_prime[j] = false;
            }
        }
    }
 
    pnumbers.push_back(2);
    for (int i = 3; i < mxN; i += 2) {
        if (is_prime[i]) pnumbers.push_back(i);
    }
}
void solve() {
    ll x, y;
    cin >> x >> y;
    if (y == x + 1) {
        cout << "-1\n";
    } else if (gcd(x, y) > 1) {
        cout << "0\n";
    } else {
        ll mn = INF, a = y - x;
        for (ll c: pnumbers) {
            if (a % c == 0) {
                mn = min(mn, c - (x % c));
                while (a % c == 0) a /= c;
            }
        }
 
        if (a > 1) mn = min(mn, a - (x % a));
        cout << mn << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    precomp();
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}