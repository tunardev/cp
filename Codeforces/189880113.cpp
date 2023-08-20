// https://codeforces.com/contest/626/submission/189880113

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define endl '\n'
 
int main() {
    cin.tie(0)->sync_with_stdio(0);   
 
    int n;
    string s;
    cin >> n >> s;
    
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        map<char, int> cnt;
        for (int j = i; j < n; ++j) {
            cnt[s[j]]++;
            if (cnt['R'] == cnt['L'] && cnt['U'] == cnt['D']) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
 