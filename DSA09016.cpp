#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> check;
int v, e, ok;
void DFS(int u){
    if(ok) return;
    check[u] = 1;
    for(auto i : adj[u]){
        if(check[i] == 0){
            DFS(i);
        }
        else if(check[i] == 1){
            ok = 1;
            return;
        }
    }
    check[u] = 2;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> v >> e;
        adj.clear(); adj.resize(v + 5);
        check.clear(); check.resize(v + 5, 0);
        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
        }
        for(int i = 1; i <= v; i++){
            if(!ok && !check[i]){
                DFS(i);
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}