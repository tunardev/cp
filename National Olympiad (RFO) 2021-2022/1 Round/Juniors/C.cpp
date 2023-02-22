#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> factors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
            factors.push_back(n / i);
        }
    } 
    factors.push_back(n);
    sort(factors.begin(), factors.end());

    if (factors.size() > k) cout << factors[k - 1];
    else cout << "-1";
    cout << '\n';
}