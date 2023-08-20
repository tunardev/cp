// https://codeforces.com/contest/1766/submission/184936952

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned ll
#define ar array
#define mod (int)(1e9 + 7)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define INF 0x3f3f3f3f
 
void solve(){
    int n;
    cin>>n;
    if(n<10){
        cout<<n<<'\n';
    } else {
        string s=to_string(n);
        cout<<(((int)s.size()-1)*9)+((int)s[0]-'0')<<'\n';
    }
}
int main(){
    int tt=1;
    cin>>tt;
    while(tt--) solve();
}