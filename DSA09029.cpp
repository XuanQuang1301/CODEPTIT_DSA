#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> visited;
int v, e;
bool ok;
void dfs(int u, int count){
    if(count == v){
        ok = true;
        return;
    }
    if(ok) return;
    for(auto i : adj[u]){
        if(!visited[i]){
            visited[i] = true;
            dfs(i, count + 1);
            visited[i] = false;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> v >> e;
        adj.clear(); adj.resize(v + 100);
        visited.clear(); visited.resize(v + 100, false);
        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        ok = false;
        for(int i = 1; i <= v; i++){
            visited.assign(v + 100, false);
            visited[i] = true;
            dfs(i, 1);
            if(ok) break;
        }
        cout << (ok ? 1 : 0) << endl;
    }
}