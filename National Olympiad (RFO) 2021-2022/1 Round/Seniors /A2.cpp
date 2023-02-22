#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 5 * (5 + 1) / 2;
    for (int i = 0; i < 4; ++i) {
        int a;
        cin >> a;
        sum -= a;
    }
    cout << sum << '\n';
}