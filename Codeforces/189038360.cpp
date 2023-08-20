// https://codeforces.com/contest/550/submission/189038360

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
 
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        for (int j = (i + 1); j < s.size(); ++j) {
            for (int k = (j + 1); k < s.size(); ++k) {
                string c;
                c += s[i], c += s[j], c += s[k];
                if (stoi(c) % 8 == 0) {
                    cout << "YES\n" << c << "\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
}