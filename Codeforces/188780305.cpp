// https://codeforces.com/contest/1775/submission/188780305

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
        int a = s.size();
        if (s[0] == s[a-1]) {
            cout << s[0] << " " << s.substr(1, a-2) << " " << s[a-1];
        } else if (s.substr(1, a-2).find('a') + 1) {
            int p = s.substr(1, a-2).find('a') + 1;
            cout << s.substr(0, p) << " " << s[p] << " " << s.substr(p + 1);
        } else {
            cout << s[0] << " " << s.substr(1, a-2) << " " << s[a-1];
        }
        cout << "\n";
    }
}