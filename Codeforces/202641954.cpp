// https://codeforces.com/contest/385/submission/202641954

#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define all(x) x.begin(), x.end()
#define fastio\
    ios_base::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0)\
 
const int maxN = 1e7;
const int sz = 1e6 + 6;
vi primes;
int x, pre[maxN + 5];
bool sieve[maxN + 5];
 
void calc_sieve(){
    sieve[1] = true;
    for(int i = 2; i <= sqrt(maxN); i++){
        if(sieve[i])   continue;
        for(int j = i * i; j <= maxN; j += i){
            sieve[j] = true;
        }
    }
    primes.push_back(2);
    for(int i = 3; i <= maxN; i += 2){
        if(!sieve[i])    primes.push_back(i);
    }
}
 
int main(){
    fastio;
    calc_sieve();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        for(int j = 0; j < primes.size() and primes[j] <= sqrt(x); j++){
            if(x % primes[j] == 0){
                pre[primes[j]]++;
                while(x % primes[j] == 0){
                    x /= primes[j];
                }
            }
        }
        if(x > 1){
            pre[x]++;
        }
    }
    for(int i = 2; i <= maxN; i++){
        pre[i] += pre[i - 1];
    }
    int q, l, r;
    cin >> q;
    while(q--){
        cin >> l >> r;
        l = min(l, (int)1e7), r = min(r, (int)1e7);
        cout << pre[r] - pre[l - 1] << endl;
    }
}