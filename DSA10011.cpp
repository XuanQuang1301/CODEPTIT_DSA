#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
int n, m;
int d[100], train[100];

void nhap(){
    cin >> n >> m;
    while(m--){
        int u, v, cost;
        cin >> u >> v >> cost;
        adj[u][v] = cost;
    }
}
int Bell(int s){
    for(int i = 1; i <= n; i++){
        d[i] = adj[s][i];
        train[i] = s;
    }
    d[s] = 0;
    for(int i = 1; i <= n - 2; i++){
        for(int v = 1; v <= n; v++){
            if(v != s){
                for(int u = 1; u <= n; u++){
                    if(d[v] > d[u] + adj[])
                }
            }
        }
    }
}
int main(){
    nhap();
    int q; cin >> q;
    while(q--){
        int u, v; cin >> u >> v;
        cout << Bell(u, v) << endl;
    }
}