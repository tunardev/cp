// https://codeforces.com/contest/1791/submission/191974748

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
void solve() {
    int n, ans = 0, sum = 1, sum1;
    string s;
    cin >> n >> s;
    string a = s.substr(0, 1), b = s.substr(1, s.size() - 1);
    set<char> p;
    map<char, int> cnt, cnt1;
    cnt[s[0]] = 1;
    for (char c: b) {
        p.insert(c);
        cnt1[c]++;
    }
    sum1 = p.size();
    for (int i = 1; i < s.size(); i++) {
        ans = max(ans, sum + sum1);
        a += b[0];
        if (cnt[b[0]] == 0) sum++;
        cnt[b[0]]++;
        if (cnt1[b[0]]-- == 1) sum1--;
        cnt1[b[0]]--;
        b.erase(b.begin());
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}