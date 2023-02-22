#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a, b;
    long long sum1 = 0, sum2 = n;
    a.push_back(n);

    for (int i = n - 1; i > 0; --i) {
        if (sum1 >= sum2) {
            sum2 += i;
            a.push_back(i);
        } else {
            sum1 += i;
            b.push_back(i);
        }
    }

    cout << a.size() << ' ' << b.size() << '\n';
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    for (int i = 0; i < b.size(); ++i) {
        cout << b[i] << ' ';
    }
    cout << '\n';
}
