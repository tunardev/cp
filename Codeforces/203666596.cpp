// https://codeforces.com/contest/1037/submission/203666596

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
 
const int sz = 2e5 + 5;
ll d[sz], a[sz], p[sz];
vi g[sz];
ll n, x, y;
 
void dfs(int node, int par){
    d[node] = d[par] + 1;
    p[node] = par;
    for(int i : g[node]){
        if(i != par){
            dfs(i, node);
        }
    }
}
 
int main(){
    cin >> n;
    for(int i = 1; i < n; i++){
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    dfs(1, 1);
    deque<int> cur;
    for(int i = 1; i <= n; i++){
        if(!cur.empty()){
            while(!cur.empty() and cur.front() != p[a[i]]){
                cur.pop_front();
            }
            if(cur.empty()){
                // cout << a[i] << " " << p[a[i]] << endl;
                cout << "NO";
                return 0;
            }
        }
        cur.push_back(a[i]);
    }
    cout << "YES";
}