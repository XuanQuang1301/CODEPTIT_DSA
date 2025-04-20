#include <bits/stdc++.h>
using namespace std;
int v, e, ok;
vector<vector<int>> adj;
vector<bool> check;
void BFS(int s){
    queue<pair<int, int>> q;
    q.push({s, 0});
    check[s] = true;
    while(!q.empty()){
        int u = q.front().first;
        int pre = q.front().second;
        q.pop();
        for(auto i : adj[u]){
            if(check[i] && i != pre){
                ok = 1;
                return;
            }
            if(!check[i]){
                check[i] = true;
                q.push({i, u});
            }
        }
    }
}
void inp(){
    cin >> v >> e;
    adj.clear(); adj.resize(v + 10);
    check.clear(); check.resize(v + 10, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        ok = 0;
        for(int i = 1; i <= v; i++){
            if(!check[i]){
                BFS(i);
                if(ok){
                    break;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}