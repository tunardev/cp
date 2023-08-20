// https://codeforces.com/contest/1771/submission/184872335

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned ll
#define ar array
#define mod (int)(1e9 + 7)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define INF 0x3f3f3f3f
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        multiset<int> st;
        map<int, vector<int>> mp;
        for (int i = 0; i < m; ++i) {
            int a, b;
            cin >> a >> b;
            if (b < a) swap(a, b);
            st.insert(b);
            mp[a].push_back(b);
        }
 
        ll ans = 0, x;
        for (int i = 1; i <= n; ++i) {
            x = 0;
            if (st.empty()) ans = n + 1;
            else x = *st.begin();
 
            ans += x - i;
            for (int  j= 0; j < mp[i].size(); ++j) {
                st.erase(st.find(mp[i][j]));
            }
        }
        cout << ans << '\n';
    }
}