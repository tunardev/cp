#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) {
            x = i;
        }
    }
    
    cout << "1 ";
    for (int i = x + 1; i < n; ++i) {
        cout << a[i] << " ";
    }
    for (int i = 0; i < x; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

