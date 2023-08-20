#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, sum = 0;
    cin >> n;
    vector<int> vis(n+1, -1);
    vis[0] = 0;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        sum = (sum + x)%n;
        if (vis[sum] != -1) {
            cout << vis[sum]+1 << " " << i << "\n";
            return;
        }
        vis[sum] = i;
    }
    cout << "-1 -1\n";
}