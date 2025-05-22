#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int a[500][500], trance[500][500];
int n, m;
void nhap(){
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(i == j) a[i][j] = 0;
            else a[i][j] = INF;
        }
    }
    while(m--){
        int u, v, cost; cin >> u >> v >> cost;
        a[u - 1][v - 1] = cost;
        a[v - 1][u - 1] = cost;
    }
}
void Floy(){
    for(int u = 0; u < n; u++){
        for(int v = 0; v < n; v++){
            trance[u][v] = u;
        }
    }
    for(int k = 0; k < n; k++){
        for(int u = 0; u < n; u++){
            for(int v = 0; v < n; v++){
                if (a[u][k] < INF && a[k][v] < INF) {
                    if(a[u][v] > a[u][k] + a[k][v]){
                        a[u][v] = a[u][k] + a[k][v];
                        trance[u][v] = trance[k][v];
                    }
                }
            }
        }
    }
}
int main(){
    nhap();
    Floy();
    int q; cin >> q;
    while(q--){
        int u, v; cin >> u >> v;
        cout << a[u - 1][v - 1] << endl;
    }
}
