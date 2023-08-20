// https://codeforces.com/contest/915/submission/191429173

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3F3F3F3F
#define mod (int)(1e9 + 7)
#define endl '\n'
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    string a, b;
    cin >> a >> b;
    if (b.size() > a.size()) sort(a.rbegin(), a.rend()); 
    else {
        bool ok = false;
        map<char, int> cnt;
        
        for (int i = 0; i < a.size(); ++i) {
            cnt[a[i]]++;
            a[i] = b[i];
        }
 
        for (int i = 0; i < b.size(); ++i) {
            char p = '9';
            if (!ok) p = a[i];
            for (char j = p; j >= '0'; --j) {
                if (cnt[j] > 0) {
                    cnt[j]--;
                    a[i] = j;
 
                    if (j < b[i]) ok = true;
                    break;
                }
            } 
            
            if (p == -1 && !ok) {
                i--;
                cnt[a[i]]++;
                a[i]--;
                i--;
            }
        }
    }
    cout << a << endl;
}