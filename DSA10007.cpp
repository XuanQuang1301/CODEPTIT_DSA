#include <bits/stdc++.h>
using namespace std;
int v, e, u;
vector<vector<int>> adj;
vector<bool> visited;
void bfs(int u){
    vector<pair<int, int>> ans;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front(); q.pop();
        visited[x] = true;
        for(auto i : adj[x]){
            if(!visited[i]){
                visited[i] = true;
                ans.push_back({x, i});
                q.push(i);
            }
        }
    }
    if(ans.size() != v - 1) cout << -1 << endl;
    else{
        for(auto [x, y] : ans){
            cout << x << " " << y << endl;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> v >> e >> u;
        adj.clear(); adj.resize(v + 1);
        visited.clear(); visited.resize(v + 1, false);
        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(u);
    }
}