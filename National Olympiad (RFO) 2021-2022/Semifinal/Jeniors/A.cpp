#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    while (k--) {
        string a = to_string(n);
        string b = to_string(n);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        int x = stoi(a), y = stoi(b);
        n = y - x;
    }

    cout << n << '\n';
}