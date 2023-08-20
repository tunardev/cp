// https://codeforces.com/contest/1352/submission/185217892

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t , n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n < 4){
            cout << -1;
            continue;
        }
        for(int i = 1 ; i <= n ; i += 2){
            cout << i << " ";
        }
        for(int j = 2 ; j <= n ; j += 2){
            cout << j << " ";
        }
        cout << endl;
    }
}