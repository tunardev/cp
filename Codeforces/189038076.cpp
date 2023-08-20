// https://codeforces.com/contest/550/submission/189038076

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
    vector<int> ab, ba;
    for (int i = 0; i < s.size() - 1; ++i) {
        if (s[i] == 'A' && s[i+1] == 'B') ab.push_back(i);
        else if (s[i] == 'B' && s[i+1] == 'A') ba.push_back(i);
    }
 
    for (int i = 0; i < ab.size(); ++i) {
        for (int j = 0; j < ba.size(); ++j) {
            if (abs(ab[i] - ba[j]) != 1) {
                cout << "YES\n";
                return 0;
            } 
        }
    }
    cout << "NO\n";
}