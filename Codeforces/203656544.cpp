// https://codeforces.com/contest/1822/submission/203656544

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
ll d[sz], dis[sz], dia, mx;
vi g[sz];
ll n, k, c, x, y;
 
void dfs(int node, int par){
    d[node] = d[par] + 1;
    if(d[node] > mx){
        mx = d[node];
        dia = node;
    }
    for(int i : g[node]){
        if(i != par){
            dfs(i, node);
        }
    }
}
 
void bfs(int node){
    queue<int> q;
    q.push(node);
    dis[node] = 0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i : g[cur]){
            if(dis[i] > dis[cur] + 1){
                dis[i] = dis[cur] + 1;
                q.push(i);
            }
        }
    }
}
 
int main(){
    int t;
    cin >> t;
    while(t--){ 
        mx = 0, dia = 1;
        cin >> n >> k >> c;
        for(int i = 1; i <= n; i++){
            g[i].clear();
            d[i] = 0, dis[i] = 1e9;
        }
        d[1] = -1;
        for(int i = 1; i < n; i++){
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(1, 1);
        bfs(dia);
        ll res = 0;
        for(int i = 1; i <= n; ++i) {
            res = max(res, dis[i] * k - d[i] * c);
        }
        cerr << "res : ";
        cout << res << endl;
    }
}