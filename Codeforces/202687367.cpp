// https://codeforces.com/contest/1675/submission/202687367

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
vi g[sz];
vector<vector<int>> v;
vector<int> path;
int res, root;
 
void dfs(int node, int par){
    if(g[node].size() == 1 and node != root){
        v.push_back(path);
        return;
    }
    for(int i : g[node]){
        if(i == par)    continue;
        path.push_back(i);
        dfs(i, node);
        path.clear();
    }
}
 
int main(){
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        res = 0;
        for(int i = 1; i <= n; i++){
            g[i].clear();
        }
        v.clear();
        path.clear();
        for(int i = 1; i <= n; i++){
            cin >> x;
            if(x == i){
                root = i;
                continue;
            }
            g[i].push_back(x);
            g[x].push_back(i);
        }
        path.push_back(root);
        dfs(root, root);
        if(n == 1){
            v.push_back({1});
        }
        cout << v.size() << endl;
        for(vi i : v){
            cout << i.size() << endl;
            for(int j : i){
                cout << j << " ";
            }
            cout << endl;
        }
    }
}