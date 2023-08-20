// https://codeforces.com/contest/1352/submission/185217864

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t , n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n + 1] , pre[n + 1];
        bool check[8005];
        pre[0] = 0;
        for(int i = 1 ; i <= n ; i++){
            cin >> a[i];
            pre[i] = pre[i - 1] + a[i];
        }
        int res = 0;
        unordered_map<int,bool>used;
        used.clear();
        for(int i = 1 ; i <= n ; i++){
            for(int j = 2 ; j <= n - i ; j++){
                if(!used[pre[j + i - 1] - pre[j - 1]]){
                    res++;
                    used[pre[j + i - 1] - pre[j - 1]] = true;
                    // cout << pre[j + i - 1] - pre[j - 1] << endl;
                }
            }
        }
        cerr << "res : ";
        cout << res << endl;
    }
}