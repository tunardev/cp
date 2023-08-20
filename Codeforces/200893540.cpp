// https://codeforces.com/contest/977/submission/200893540

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n;
    cin >> n;
    pair<ll, ll> a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i].second;
 
        ll x = a[i].second;
        while (x % 3 == 0) {
            x /= 3;
            a[i].first--;
        }
    }
 
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        cout << a[i].second << " ";
    }
    cout << endl;
}