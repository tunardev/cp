// https://codeforces.com/contest/61/submission/202683254

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
 
struct fenwickTree{
    int n;
    vi BIT;
    fenwickTree(int sz){
        n = sz;
        BIT.resize(n + 5, 0);
    }
    void update(int i, int v){
        while(i <= n){
            BIT[i] += v;
            i += (i & (-i));
        }
    }
    int query(int i){
        int res = 0;
        while(i > 0){
            res += BIT[i];
            i -= (i & (-i));
        }
        return res;
    }
};
 
map<int, int> mp;
int ind = 1;
 
int main(){
    int n, x;
    cin >> n;
    fenwickTree t(n);
    int a[n + 1], b[n + 1];
    vll v(n + 1, {0, 0});
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b + 1, b + n + 1);
    for(int i = 1; i <= n; i++){
        if(mp[b[i]] == 0){
            mp[b[i]] = ind++;
        }
    }
    for(int i = 1; i <= n; i++){
        a[i] = mp[a[i]];
    }
    for(int i = 1; i <= n; i++){
        v[i].first = t.query(ind - 1) - t.query(a[i]);
        t.update(a[i], 1);
    }
    fenwickTree tt(n);
    ll res = 0;
    for(int i = n; i >= 1; i--){
        v[i].second = tt.query(a[i] - 1);
        tt.update(a[i], 1);
        res += v[i].first * v[i].second;
        // cout << a[i] << " " << v[i].first << " " << v[i].second << endl;
    }
    cout << res;
}