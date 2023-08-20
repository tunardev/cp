// https://codeforces.com/contest/1774/submission/186057626

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned ll
#define INF 0x3f3f3f3f
#define pii pair<int,int>
#define pll	pair<ll,ll>
#define vi vector<int>
#define vll	vector<ll>
#define all(x) (x).begin(), (x).end()
 
void solve() {
    ll n, count = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 1; ++i) {
        if (i) {
            if (s[i] == s[i-1]) {
                count++;
            } else {
                count = 0;
            }
        } 
        cout << i - count + 1 << " ";
    }  
    cout << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
}
 