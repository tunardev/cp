#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a[n + 1];
    for (int i = 2; i <= n; ++i) {
        int x;
        cin >> x;
        a[x].push_back(i);
    }

    for (int i = 1; i <= n; ++i) {
        cout << a[i].size() << '\n';
    }
}