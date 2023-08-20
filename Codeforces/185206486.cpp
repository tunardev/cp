// https://codeforces.com/contest/1352/submission/185206486

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t , n;
    cin >> t;
    while(t--){
        cin >> n;
        int i = 0;
        while(n){
            if(n % 10 == 0){
                n /= 10;
                i++;
                continue;
            }
            cout << (n % 10) * pow(10 , i) << " ";
            n /= 10;
            i++;
        }
        cout << endl;
    }
}