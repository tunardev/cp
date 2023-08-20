// https://codeforces.com/contest/1712/submission/188624583

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n + 1], mx = -1;
        if(n == 1){
            cin >> a[1];
            cout << 0 << endl;
            continue;
        }
        map<int, bool>used;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            if(a[i] < a[i - 1]){
                mx = i;
            }
        }
        // cerr << "res : ";
        if(mx == -1){
            cout << 0 << endl;
        }
        else{
            int res = 0;
            // cout << mx << "\n";
            if(a[mx] == a[n]){
                while(a[n] == a[mx]){
                    mx--;
                }
            }
            for(int i = 1; i <= mx; i++){
                if(used[a[i]]){
                    continue;
                }
                else{
                    res++;
                    used[a[i]] = true;
                }
            }
            cout << res << endl;
        }
    } 
}