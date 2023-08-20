// https://codeforces.com/contest/1352/submission/185211148

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t , n;
    cin >> t;
    while(t--){
        deque<int>dq;
        cin >> n;
        for(int i = 1 ; i <= n ; i++){
            int x;
            cin >> x;
            dq.push_back(x);
        }
        int cnt = 1 , a = 0 , b = 0 , pre , turn = 2;
        a += dq.front();
        pre = a;
        dq.pop_front();
        while(!dq.empty()){
            int cur = 0;
            while(!dq.empty() and cur <= pre and turn == 2){
                b += dq.back();
                cur += dq.back();
                dq.pop_back();
            }
            while(!dq.empty() and cur <= pre and turn == 1){
                a += dq.front();
                cur += dq.front();
                dq.pop_front();
            }
            cnt++;
            turn = 3 - turn;
            pre = cur;
        }
        cout << cnt << " " << a << " " << b << endl;
    }
}