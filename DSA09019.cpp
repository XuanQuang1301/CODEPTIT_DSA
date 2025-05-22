#include <bits/stdc++.h>
using namespace std;
int V, E, v, u, pre, ok;
vector<bool> check;
vector<vector<int>> adj;
void Test(int s){
    queue<pair<int, int>> q;
    q.push({s, 0});
    check[s] = true;
    while(!q.empty()){
        u = q.front().first;
        pre = q.front().second;
        q.pop();
        for(int v : adj[u]){
            if(check[v] && v != pre){
                ok = 1;
                return;
            }
            if(check[v] == false){
                check[v] = true;
                q.push({v, u});
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> V >> E;
        adj.clear(); adj.resize(V + 1);
        check.clear(); check.resize(V + 1, false);
        for(int i = 0; i < E; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        ok = 0;
        for(int i = 1; i <= V; i++){
            if(!check[i]){
                Test(i);
            }
            if(ok){ break;}
        }
        cout << (ok ?  "YES" : "NO") << endl;
    }
}