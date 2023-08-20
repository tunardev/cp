// https://codeforces.com/contest/932/submission/188912003

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
 
    string a;
    cin >> a;
    string s = a;
    reverse(all(a));
    s += a;
    cout << s << '\n';
}