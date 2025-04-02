#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> visited;
int v, e, u;
void inp(){
    cin >> v >> e >> u;
    adj.clear(); adj.resize(v + 1);
    visited.clear(); visited.resize(v + 1, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
}
void DFS(int u){
    visited[u] = true;
    cout << u << " ";
    for(auto i : adj[u]){
        if(!visited[i]){
            DFS(i);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        DFS(u); 
        cout << endl;
    }
}