// https://codeforces.com/contest/1660/submission/189564548

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define endl '\n'
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int tt;
    cin >> tt;
    while (tt--) {
        int a, b;
        cin >> a >> b;
 
        if (a == 0) cout << 1;
        else cout << a + 1 + (b << 1);
        cout << endl;
    }
}