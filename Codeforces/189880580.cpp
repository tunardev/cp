// https://codeforces.com/contest/626/submission/189880580

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
    if (s == string(n, s[0])) {
        cout << s[0];
    } else {
        if (count(s.begin(), s.end(), 'B') != (n - 1)) cout << 'B';
        if (count(s.begin(), s.end(), 'G') != (n - 1)) cout << 'G';
        if (count(s.begin(), s.end(), 'R') != (n - 1)) cout << 'R';
    }
    cout << endl;
}
 