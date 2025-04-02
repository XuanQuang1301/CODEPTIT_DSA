#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;
vector<pair<int, int>> DScanh;
int v, e;
void nhap(){
    cin >> v >> e;
    adj.clear(); adj.resize(v + 10);
    check.clear(); check.resize(v + 10, false);
    DScanh.clear(); DScanh.resize(e + 10);
    for(int i = 0; i < e; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        DScanh.push_back({x, y});
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
void DFS2(int u, int s, int t){
    check[u] = true;
    for(auto i : adj[u]){
        if((u == s && i == t) || (u == t && i == s)){
            continue;
        }
        if(!check[i]){
            DFS2(i, s, t);
        }
    }
}
void DemCanh(){
    int lt = 0;
    for(int i = 1; i <= v; i++){
        if(!check[i]){
            DFS(i);
            lt++;
        }
    }
    for(auto i : DScanh){
        int x = i.first, y = i.second;
        fill(check.begin(), check.end(), false);
        int dem = 0;
        for(int u = 1; u <= v; u++){
            if(!check[u]){
                DFS2(u, x, y);
                dem++;
            }
        }
        if(dem > lt){
            cout << x << " " << y << " ";
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        DemCanh();
        cout << endl;
    }
}