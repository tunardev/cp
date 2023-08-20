// https://codeforces.com/contest/1766/submission/184948089

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned ll
#define ar array
#define mod (int)(1e9 + 7)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define pcc pair<char, char>
#define INF 0x3f3f3f3f
 
void solve(){
    int n;
    string s;
    cin>>n>>s;
    map<pcc, int> mp;
    pcc p={s[0], s[1]};
    mp[p]++;
    for(int i=2; i<n; ++i){
        pcc a={s[i-1], s[i]};
        if(mp[a] != 0){
            if((a==p&&mp[a]>1)||(a!=p)) {
                cout<<"YES\n";
                return;
            }
        }
        mp[a]++;
        p=a;
    }
    cout<<"NO\n";
}
int main(){
    int tt=1;
    cin>>tt;
    while(tt--) solve();
}