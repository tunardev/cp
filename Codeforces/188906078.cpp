// https://codeforces.com/contest/1654/submission/188906078

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        cout << a[n] + a[n - 1] << endl;
    }
}