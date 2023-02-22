#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, brackets = "()[]{}", ans = "";
    cin >> s;
    for (char c: s) {
        if (brackets.find(c) != -1) {
            ans += c;
        }
    }
    cout << ans << '\n';
}