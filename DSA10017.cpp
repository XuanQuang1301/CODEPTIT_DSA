#include <bits/stdc++.h>
using namespace std;
int n, m, dist[100], parent[100];
vector<int> adj[100];
vector<vector<int>> w;
int bell(int u){
        for(int i = 1; i <= n; i++){
            dist[i] = INT_MAX;
            parent[i] = -1;
        }
        dist[u] = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j < m; j++){
                if(dist[])
            }
        }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> adj[i][j];
                
            }
        }

    }
}