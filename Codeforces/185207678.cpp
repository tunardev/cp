// https://codeforces.com/contest/1352/submission/185207678

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t , n , k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(n % k == 0){
            cout << "YES" << endl;
            for(int i = 1 ; i <= k ; i++){
                cout << n / k << " ";
            }
            cout << endl;
            continue;
        }
        int temp = n - (n / k) * k;
        if(temp % 2 == (n / k) % 2){
            cout << "YES" << endl;
            cout << temp << " ";
            for(int i = 1 ; i <= k ; i++){
                cout << n / k << " ";
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}