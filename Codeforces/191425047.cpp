// https://codeforces.com/contest/915/submission/191425047

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, k, x, mx = -1;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(k % x == 0)
            mx = max(x, mx);
    }
    cout << k / mx;
}