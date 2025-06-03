#include <bits/stdc++.h>
using namespace std;
#define II pair<int, int> 
vector<vector<II>> adj;
vector<bool> visited;
vector<int> d;
int V, E, u, v, w, S;

struct cmp{
    bool operator() (pair<int, int> a, pair<int, int> b){
        return  a.second > b.second;
    }
};
void solve(int s){
    priority_queue<II, vector<II>, cmp> q;
    q.push({s, 0});
    visited[s] = true;
    d[s] = 0;
    while(!q.empty()){
        u = q.top().first; w = q.top().second;
        q.pop();
        visited[u] = true;
        for(auto i : adj[u]){
            v = i.first;
            if(!visited[v]){
                d[v] = min(d[v], w + i.second);
                q.push({v, d[v]});
            }
        }
    }
    for(int i = 1; i <= V; i++){
        cout << d[i] << " ";
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> V >> E >> S;
        adj.assign(V + 10, {});
        visited.assign(V + 10, false);
        d.assign(V + 10, INT_MAX);
        while(E--){
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        solve(S);
    }
}