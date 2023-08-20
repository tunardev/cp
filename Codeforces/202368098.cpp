// https://codeforces.com/contest/1810/submission/202368098

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int log2(ll n) {
    int x = 0;
    while (n) n /= 2, x++;
    return x;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n % 2 == 0) {
            cout << "-1\n";
            continue;
        }        
 
        int d = log2(n);
        cout << d-1 << endl;
        for (int i = d-1; i >= 1; --i) {
            cout << (n & (1 << i) ? 2 : 1) << " ";
        }
        cout << endl;
    }
}
 