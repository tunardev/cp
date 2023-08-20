// https://codeforces.com/contest/1771/submission/184871592

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned ll
#define ar array
#define mod (int)(1e9 + 7)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define INF 0x3f3f3f3f
 
int main() {
    ull t;
    cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> A(n);
        for(ll i = 0; i < n; i++){
            cin >> A[i];
        }
 
        sort(A.begin(), A.end());
        unsigned seed = 0;
        shuffle(A.begin(), A.end(), default_random_engine(seed));
  
        bool flag = false;
        for(ll i  = 0; i < min(n, 150LL); i++){
            for(ll j = 0; j < n; j++){
                if(i != j && __gcd(A[i], A[j]) > 1){
                    flag = true;
                }
            }
        }
        cout << (flag ? "Yes" : "No") << "\n";
    }
}