// https://codeforces.com/contest/937/submission/189145064

#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define inf 0x3F3F3F3F
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
int main() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a != 0) s.insert(a);
    }
    cout << s.size() << "\n";
}