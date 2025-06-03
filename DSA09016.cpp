#include <bits/stdc++.h>
using namespace std;
int v, e;
vector<vector<int>> adj;
vector<int> vs;
bool ok;
void dfs(int u){
    vs[u] = 1;
    for(auto i : adj[u]){
        if(!vs[i]){
            dfs(i);
        }
        if(vs[i] == 1){
            ok = true;
            return;
        }
    }
    vs[u] = 2;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> v >> e;
        adj.assign(v + 10, {});
        vs.assign(v + 10, 0);
        while(e--){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        ok = false;
        for(int i = 1; i <= v; i++){
            if(!ok && !vs[i]){
                dfs(i);
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}