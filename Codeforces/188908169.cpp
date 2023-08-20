// https://codeforces.com/contest/233/submission/188908169

#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        if (n & 1) cout << "-1\n";
        else {
            for (int i = 0; i < n; ++i) {
                if (i & 1) a[i] = i;
                else a[i] = i + 2;
            }
            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }
}