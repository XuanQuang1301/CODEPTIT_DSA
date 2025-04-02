#include <bits/stdc++.h>
using namespace std;
int v, e, u1, u2, train[10000], ok;
vector<vector<int>> adj;
vector<bool> ans;
void inp(){
    cin >> v >> e >> u1 >> u2;
    adj.clear(); adj.resize(v + 10);
    ans.clear(); ans.resize(v + 10, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ok = 0;
    memset(train, 0, sizeof(train));
}
void DFS(int u){
    if(ok) return;
    ans[u] = true;
    for(auto i : adj[u]){
        if(!ans[i]){
            train[i] = u;
            DFS(i);
            if(i == u2){
                ok = 1;
                return;
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        DFS(u1);
        vector<int> v; v.push_back(u2);
        int tmp = train[u2];
        while(tmp != 0){
            v.push_back(tmp);
            tmp = train[tmp];
        }
        for(int i = v.size() - 1; i >= 0; i--){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}