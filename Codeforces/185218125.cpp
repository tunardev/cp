// https://codeforces.com/contest/1352/submission/185218125

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t , n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n < 4){
            cout << -1 << endl;
            continue;
        }
        for(int i = n - (1 - n % 2) ; i >= 1 ; i -= 2){
            cout << i << " ";
        }
        for(int j = 2 ; j <= n ; j += 2){
            cout << j << " ";
        }
        cout << endl;
    }
}