// https://codeforces.com/contest/1654/submission/188909306

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        bool flag = true;
        multiset<int>st;
        for(int i = 1; i <= n; i++){
            cin >> x;
            st.insert(x);
        }
        while(st.size() > 1){
            int cur = *st.begin();
            st.erase(st.begin());
            if(st.find(cur + 1) != st.end()){
                st.erase(st.find(cur + 1));
                st.insert(cur * 2 + 1);
            }
            else{
                if(st.find(cur) != st.end()){
                    st.erase(st.find(cur));
                    st.insert(cur * 2);
                }
                else{
                    flag = false;
                    break;
                }
            }/*
            for(int i : st){
                cout << i << " ";
            }
            cout << endl;*/
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}