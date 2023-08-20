// https://codeforces.com/contest/1771/submission/184884910

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned ll
#define ar array
#define mod (int)(1e9 + 7)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define INF 0x3f3f3f3f
 
const int mxN = 32000;
vector<bool> is_prime(mxN+1, true);
vector<ll> p;
void sieve(){
    is_prime[0]=is_prime[1]=0;
    for(int i=0; i*i<mxN; ++i){
        if(is_prime[i]){
            for(int j=2*i; j<mxN; j+=i){
                is_prime[j]=0;
            }
        }
    }
    for(int i=0; i<mxN; ++i){
        if(is_prime[i]){
            p.push_back(i);
        }
    }
}
void solve(){
    ll n;
    cin>>n;
    map<int, int> cnt, cnt1;
    for(int i=0; i<n; ++i){
        ll a;
        cin>>a;
        for(int j=0; j<p.size(); ++j){
            if(a%p[j]==0){
                cnt1[j]++;
            }
            while(a%p[j]==0)a/=p[j];
        }
        if(a>1) cnt[a]++;
    }
    for(int i=0;i<p.size(); ++i){
        if(cnt1[i]>1){
            cout<<"YES\n";
            return;
        }
    }
    for(auto u:cnt){
        if(u.second>1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    sieve();
    int t;
    cin>>t;
    while(t--)solve();
}