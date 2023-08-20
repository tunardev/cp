// https://codeforces.com/contest/1654/submission/188907084

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
        map<char, int> cnt;
        for (int i = 0; i < s.size(); ++i) {
            cnt[s[i]]++;
        }
 
        int ind = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (cnt[s[i]] == 1) {
                ind = i;
                break;
            } else cnt[s[i]]--;
        }
 
        for (int i = ind; i < s.size(); ++i) {
            cout << s[i];
        }
        cout << "\n";
    }
}