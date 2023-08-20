// https://codeforces.com/contest/1825/submission/205089581

#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    map<char, int> cnt;
    for (int i = 0; i < s.size(); ++i) {
        cnt[s[i]]++;
    }
    if (cnt.size() == 1) {
        cout << "-1\n";
        return;
    }
    cout << s.size() - 1 << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}