// https://codeforces.com/contest/1771/submission/184903592

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
    ll n, m, ans=0, mx=0;
    cin>>n>>m;
    vector<ll> A(n+1, 0);
    for(ll i=0; i<m; ++i){
        ll a, b;
        cin>>a>>b;
        if(a<b) swap(a, b);
        A[a]=max(A[a], b);
    }
    for(ll i=1; i<= n; ++i){
        mx=max(A[i], mx);
        ans+=i-mx;
    }
    cout<<ans<<'\n';
}
int main(){
    int tt;
    cin>>tt;
    while(tt--) solve();
}