// https://codeforces.com/contest/1352/submission/185216240

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
 
/*if(y==0)
    {
        if(x)fr(i, x+1)s+='0';
        if(z)fr(i, z+1)s+='1';
        cout<<s<<endl;
    }
    else
    {
        fr(i, x+1)s+='0';
        fr(i, z+1)s+='1';
        y--;
        fr1(i, y)if(i&1)s+='0'; else s+='1';
        cout<<s<<endl;
    }*/
 
void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
 
    string s;
    if (b == 0) {
        if (a) for (int i = 0; i < a; ++i) s += '0';
        if (c) for (int i = 0; i < c; ++i) s += '1';
    } else {
        for (int i = 0; i < a; ++i) s += '0';
        for (int i = 0; i < c; ++i) s += '1';
 
        for (int i = 1; i < b; ++i) {
            if (i%2 == 0) {
                s += '0';
            } else {
                s += '1';
            }
        }
    }
    cout << s << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    ll tt;
    cin >> tt;
    while (tt--) solve();
}