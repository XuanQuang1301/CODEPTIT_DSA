#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;
int v, e, u;
void inp(){
    cin >> v >> e >> u;
    adj.clear(); adj.resize(v + 1);
    check.clear(); check.resize(v + 1, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int i = q.front(); q.pop();
        cout << i << " ";
        check[i] = true;
        for(auto j : adj[i]){
            if(!check[j]){
                check[j] = true;
                q.push(j);
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        BFS(u);
        cout << endl;
    }
}