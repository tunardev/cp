// https://codeforces.com/contest/378/submission/189558625

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define endl '\n'
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int a, b;
    cin >> a >> b;
    int x = 0, y = 0, p = 0;
    for (int i = 1; i <= 6; ++i) {
        if (abs(a - i) < abs(b - i)) x++;
        else if (abs(a - i) == abs(b - i)) y++;
        else p++;
    }
    cout << x << " " << y << " " << p << endl;
}