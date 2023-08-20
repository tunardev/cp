// https://codeforces.com/contest/1654/submission/188913318

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        long long sum = 0;
        multiset<long long>cake1, cake2;
        for(int i = 1; i <= n; i++){
            cin >> x;
            cake1.insert(x);
            sum += x;
        }
        cake2.insert(sum);
        while(!cake2.empty()){
            x = *--cake2.end();
            if(*(--cake1.end()) > x){
                // cout << *(--cake1.end()) << " " << x << endl;
                break;
            }
            cake2.erase(--cake2.end());
            if(cake1.find(x) != cake1.end()){
                cake1.erase(cake1.find(x));
                // cout << "1 : " << x << endl;
            }
            else{
                // cout << "2 : " << x / 2 << " " << (x + 1) / 2 << endl;
                cake2.insert(x / 2);
                cake2.insert((x + 1) / 2);
            }
        }
        cout << (cake1.empty() ? "YES\n" : "NO\n"); 
    }
}