#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> visited;
int v, e; 
int color[10000];
bool bfs(int u){
    queue<int> q;
    q.push(u);
    color[u] = 1;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(auto i : adj[x]){
            if(!color[i]){
                color[i] = 3 - color[x];
                q.push(i);
            }
            if(color[i] == color[x]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> v >> e;
        adj.clear(); adj.resize(v + 100);
        visited.clear(); visited.resize(v + 100, false);
        memset(color, 0, sizeof(color));
        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bool ok = false;
        for(int i = 1; i <= v; i++){
            if(color[i] == 0){
                ok = bfs(i);
            }
            if(!ok) break;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}