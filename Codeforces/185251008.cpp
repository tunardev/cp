// https://codeforces.com/contest/1551/submission/185251008

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t , n;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        unordered_map<char,int>mp;
        for(char c : s){
            mp[c]++;
        }
        int r = 0 , g = 0;
        for(pair<char,int> i : mp){
            if(i.second >= 2){
                r++;
                g++;
                //cerr << "A";
            }
            else{
                if(g < r){
                    g++;
                }
                else if(r <= g){
                    r++;
                }
            }
            //cout << i.first << " " << i.second << endl;
            //cout << r << " " << g << endl;
        }
        //cout << g << " " << r << endl;
        cout << min (g , r) << endl;
    }
}