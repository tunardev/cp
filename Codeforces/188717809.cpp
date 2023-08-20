// https://codeforces.com/contest/1775/submission/188717809

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
        string s;
        cin >> s;
        int n = s.size(), ok = 1;
        for (int i = 0; i < (n - 2); ++i) {
            for (int j = 0; j < (n - i - 1); ++j) {
                string a = s.substr(0, i + 1), b = s.substr(i+1, j+1), c = s.substr(i + j + 2, n - i - j + 2);
                if ((c >= b && a >= b) || (b >= c && b >= a)) {
                    ok = 0;
                    cout << a << " " << b << " " << c << "\n";
                    break;
                }
            }
            if (!ok) break;
        }
    }
}