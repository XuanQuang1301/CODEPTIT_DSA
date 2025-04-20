#include <bits/stdc++.h>
using namespace std;
int adj[1000][1000], tmp[1000][1000];
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> adj[i][j];
            }
        }
        tmp[1][1] = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(tmp[i][j] > 0){
                    int x = j + adj[i][j], y = i + adj[i][j];
                    if(x <= m){
                        tmp[i][x] = tmp[i][j] + 1;
                    }
                    if(y <= n){
                        tmp[y][j] = tmp[i][j] + 1;
                    }
                }
            }
        }
        if(tmp[n][m] > 0){
            cout << tmp[n][m];
        }
        else cout << -1;
    }
}