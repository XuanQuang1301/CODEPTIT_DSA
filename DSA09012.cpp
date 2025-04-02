#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;
int v, e;

void nhap(){
    cin >> v >> e;
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
    for(auto it : adj[u]){
        if(!check[it]){
            DFS(it);
        }
    }
}
void DinhTru(){
    int lt = 0;
    for(int i = 1; i <= v; i++){
        if(!check[i]){
            DFS(i);
            lt++;
        }
    }
    for(int i = 1; i <= v; i++){
        fill(check.begin(), check.end(), false);
        int dem = 0;
        check[i] = true;
        for(int j = 1; j <= v; j++){
            if(!check[j]){
                DFS(j);
                dem++;
            }
        }
        if(dem > lt){
            cout << i << " ";
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        DinhTru();
        cout << endl;
    }
}