#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;

int v, e, u1, u2, ok, parent[1005];
void inp(){
    cin >> v >> e >> u1 >> u2;
    adj.clear(); adj.resize(v + 1);
    check.clear(); check.resize(v + 1, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    ok = 0;
    memset(parent, 0, sizeof(parent));
    parent[u1] = 0;
}
void DFS(int u){
    if(ok) return;
    check[u] = true;
    if(u == u2){
        ok = 1;

    }
    for(auto i : adj[u]){
        if(!check[i]){
            check[i] = true;
            parent[i] = u;
            DFS(i);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        DFS(u1);
        if(ok){
            vector<int> ans;
            int tmp = u2;
            ans.push_back(u2);
            while(tmp != u1){
                ans.push_back(parent[tmp]);
                tmp = parent[tmp];
            }
            for(int i = ans.size() - 1; i >= 0; i--){
                cout << ans[i] << " ";
            }
        }
        else cout << -1;
        cout << endl;
    }
}