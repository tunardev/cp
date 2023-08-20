// https://codeforces.com/contest/1771/submission/184888219

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned ll
#define ar array
#define mod (int)(1e9 + 7)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define INF 0x3f3f3f3f
 
const int MX = 32000;
bool is_prime[MX];
// int cnt[4001];
vector<int> pnumbers;
void sieve(){
    for(int i=0; i<MX; ++i){
        is_prime[i]=1;
    }
    is_prime[0]=is_prime[1]=0;
    for(int i=0; i*i<MX; ++i){
        if(is_prime[i]){
            for(int j=i+i; j<MX; j+=i){
                is_prime[j]=0;
            }
        }
    }
    for(int i=0; i<MX; ++i){
        if(is_prime[i]) pnumbers.push_back(i);
    }
}
void solve() {
  	int n;
    cin >> n;
    map<int, int> cnt, mp;
    for(int i=0; i<n; ++i){
        ll a;
        cin>>a;
        for(int j=0; j<pnumbers.size(); ++j){
            if(a%pnumbers[j]==0) cnt[j]++;
            while (a%pnumbers[j] == 0) a/=pnumbers[j];
        }
        if(a>1) mp[a]++;
    }
    for(int i=0; i<pnumbers.size(); ++i){
        if(cnt[i]>1){
            cout<<"YES\n";
            return;
        }
    }
    for(auto u=mp.begin(); u!=mp.end(); ++u){
        if((*u).second>1){
            cout<<"YES\n";
            return;
        }
    }
	  cout<<"NO\n";
    // memset(cnt, 0, sizeof(cnt));
}
int main(){
	  ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    sieve();
    int t;
    cin>>t;
    while(t--) solve();
}
 