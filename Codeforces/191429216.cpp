// https://codeforces.com/contest/915/submission/191429216

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size(), m = s2.size();
    if(n < m){
        sort(s1.rbegin(), s1.rend());
        cout << s1;
    }
    else{
        sort(s1.begin(), s1.end());
        for(int i = 0; i < n; i++){
            auto it = upper_bound(s1.begin(), s1.end(), s2[i]);
            if(it != s1.begin())    --it;
            cout << *it;
            if(s2[i] > *it){
                s1.erase(it);
                sort(s1.rbegin(), s1.rend());
                cout << s1;
                return 0;
            }
            s1.erase(it);
        }
    }
}