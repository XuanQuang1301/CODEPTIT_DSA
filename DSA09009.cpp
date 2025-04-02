#include <bits/stdc++.h>
using namespace std;
int v, e, cnt;
vector<vector<int>> adj;
vector<bool> check;

void inp(){
    cin >> v >> e;
    cnt = 0;
    adj.clear(); adj.resize(v + 10);
    check.clear(); check.resize(v + 10, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void DFS(int u){
    check[u] = true;
    for(auto i : adj[u]){
        if(!check[i]){
            DFS(i);
        }
    }
}

void dem(){
    for(int i = 1; i <= v; i++){
        if(!check[i]){
            cnt++;
            DFS(i);
        }
    }
    cout << cnt << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        dem();      
    }
}